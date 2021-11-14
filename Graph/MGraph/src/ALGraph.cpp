#include "ALGraph.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool Adjacent(ALGraph& G, VertexType x, VertexType y)
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
