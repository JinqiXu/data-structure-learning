#include "MGraph.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool Adjacent(MGraph& G, VertexType x, VertexType y)
{
    int m, n;
    m = GetIndex(G.Vex, G.vexnum, x);
    n = GetIndex(G.Vex, G.vexnum, y);
    return G.Edge[m][n] != 0;
}

void Neighbors(MGraph& G, VertexType x)
{
    int m, i = 0, j = 0;

    m = GetIndex(G.Vex, G.vexnum, x);
    int res[MaxSize];
    for (i = 0; i < G.vexnum; i++) {
        if (G.Edge[m][i] != 0) {
            res[j++] = i;
        }
    }
    for (int k = 0; k < j; k++) {
        cout << G.Vex[res[k]] << " ";
    }
    cout << endl;
}

void InsertVertex(MGraph& G, VertexType x)
{
    G.Vex[G.vexnum] = x;
    G.vexnum++;
}

void DeleteVertex(MGraph& G, VertexType x) { }

void AddEdge(MGraph& G, VertexType x, VertexType y)
{
    int m, n;
    m = GetIndex(G.Vex, G.vexnum, x);
    n = GetIndex(G.Vex, G.vexnum, y);
    G.Edge[m][n] = 1;
}

int GetIndex(VertexType vex[], int num, VertexType x)
{
    int res = 0;
    for (int i = 0; i < num; i++) {
        if (vex[i] == x) {
            res = i;
            break;
        }
    }
    return res;
}

void RemoveEdge(MGraph& G, VertexType x, VertexType y)
{
    int m, n;
    m = GetIndex(G.Vex, G.vexnum, x);
    n = GetIndex(G.Vex, G.vexnum, y);
    G.Edge[m][n] = 0;
}

int FirstNeighbor(MGraph G, VertexType x)
{
    int res = -1;
    int m = GetIndex(G.Vex, G.vexnum, x);
    for (int i = 0; i < G.vexnum; i++) {
        if (G.Edge[m][i] != 0) {
            res = i;
            break;
        }
    }
    return res;
}

int NextNeighbor(MGraph G, VertexType x, VertexType y)
{
    int m, n, res = -1;
    m = GetIndex(G.Vex, G.vexnum, x);
    n = GetIndex(G.Vex, G.vexnum, y);
    for (int i = n + 1; i < G.vexnum; i++) {
        if (G.Edge[m][i] != 0) {
            res = i;
            break;
        }
    }
    return res;
}

void BFSTraverse(MGraph G)
{
    for (int i = 0; i < MaxSize; i++)
        visited[i] = false;

    InitQueue(Q);
    for (int i = 0; i < G.vexnum; i++) {
        if (!visited[i]) {
            BFS(G, i);
        }
    }
}

void BFS(MGraph G, int v)
{
    visit(v);
    visited[v] = true;
    EnQueue(Q, v);

    while (!isEmpty(Q)) {
        DeQueue(Q, v);
        for (int w = FirstNeighbor(G, v); w > 0; w = NextNeighbor(G, v, w)) {
            if (!visited(w)) {
                visit(w);
                visited[w] = true;
                EnQueue(Q, w);
            }
        }
    }
}

void BFS_MIN_DISTANCE(MGraph G, int u)
{
    for (int i = 0; i < MaxSize; i++) {
        d[i] = MaxSize;
    }
    d[u] = 0;
    visited[u] = true;
    EnQueue(Q, u);

    while (!isEmpty(Q)) {
        DeQueue(Q, u);
        for (int w = FirstNeighbor(G, u), w > 0; w = NextNeighbor(G, u, w)) {
            visited[w] = true;
            d[w] = d[u] + 1;
            EnQueue(Q, w);
        }
    }
}
