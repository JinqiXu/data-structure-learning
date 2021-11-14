#include "ALGraph.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool Adjacent(ALGraph G, VertexType x, VertexType y)
{
    bool res = false;
    int m = GetIndex(G.vertices, G.vexnum, x);
    int n = GetIndex(G.vertices, G.vexnum, y);
    ArcNode* p = G.vertices[m].first;
    while (p != NULL) {
        if (p->adjvex == n) {
            res = true;
            break;
        }
        p = p->next;
    }
    return res;
}

int GetIndex(AdjList vex, int num, VertexType x)
{
    int res = -1;
    for (int i = 0; i < num; i++) {
        if (vex[i].data == x) {
            res = i;
            break;
        }
    }
    return res;
}

void Neighbors(ALGraph G, VertexType x)
{
    int m = GetIndex(G.vertices, G.vexnum, x);
    ArcNode* p = G.vertices[m].first;
    while (p != NULL) {
        cout << p->adjvex << " ";
        p = p->next;
    }
}

void InsertVertex(ALGraph& G, VertexType x)
{
    VNode p;
    p.first = NULL;
    p.data = x;
    G.vertices[G.vexnum] = p;
    G.vexnum++;
}

void DeleteVertex(ALGraph& G, VertexType x)
{
    int m = GetIndex(G.vertices, G.vexnum, x);
    ArcNode* p = G.vertices[m].first;
    while (p != NULL) {
        int n = p->adjvex;

        ArcNode* q = G.vertices[n].first;
        if (q->adjvex == m) {
            G.vertices[n].first = q->next;
            continue;
        }
        while (q->next != NULL) {
            if (q->next->adjvex == m) {
                q->next = q->next->next;
            }
            q = q->next;
        }
        p = p->next;
    }
}

void AddEdge(ALGraph& G, VertexType x, VertexType y)
{
    //以无向图为例
    int m, n;
    m = GetIndex(G.vertices, G.vexnum, x);
    n = GetIndex(G.vertices, G.vexnum, y);

    ArcNode *p = G.vertices[m].first, *q = (ArcNode*)malloc(sizeof(ArcNode));
    q->adjvex = n;
    q->next = p->next;
    p->next = q;

    p = G.vertices[n].first;
    ArcNode* r = (ArcNode*)malloc(sizeof(ArcNode));
    r->adjvex = m;
    r->next = p->next;
    p->next = r;
}

void RemoveEdge(ALGraph& G, VertexType x, VertexType y)
{
    int m, n;
    m = GetIndex(G.vertices, G.vexnum, x);
    n = GetIndex(G.vertices, G.vexnum, y);

    ArcNode *p = G.vertices[m].first, *q = NULL;
    while (p->next != NULL) {
        q = p->next;
        if (q->adjvex == n) {
            p->next = q->next;
            break;
        }
        p = p->next;
    }
    free(q);

    p = G.vertices[n].first;
    while (p->next != NULL) {
        q = p->next;
        if (q->adjvex == m) {
            p->next = q->next;
            break;
        }
        p = p->next;
    }
    free(q);
}

int FirstNeighbor(ALGraph G, VertexType x)
{
    int res = -1;
    int m = GetIndex(G.vertices, G.vexnum, x);
    if (G.vertices[m].first != NULL)
        res = G.vertices[m].first->adjvex;
    return res;
}

int NextNeighbor(ALGraph G, VertexType x, VertexType y)
{
    int m = GetIndex(G.vertices, G.vexnum, x),
        n = GetIndex(G.vertices, G.vexnum, y);
    int res = -1;
    ArcNode* p = G.vertices[m].first;
    while (p != NULL) {
        if (p->adjvex == n) {
            if (p->next != NULL) {
                res = p->next->adjvex;
            }
        }
        p = p->next;
    }
    return res;
}
