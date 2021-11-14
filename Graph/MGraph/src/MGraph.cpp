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
}
