#define MaxSize 105
typedef char VertexType;
typedef int EdgeType;

//边表
typedef struct ArcNode {
    int adjvex;
    struct ArcNode* next;
    // InfoType info;边权值
} ArcNode;

//顶点表
typedef struct VNode {
    VertexType data;
    ArcNode* first;
} VNode, AdjList[MaxSize];

typedef struct {
    AdjList vertices;
    int vexnum, arcnum;
} ALGraph;

bool Adjacent(ALGraph& G, VertexType x, VertexType y);
void Neighbors(ALGraph& G, VertexType x);
void InsertVertex(ALGraph G, VertexType x);
void DeleteVertex(ALGraph& G, VertexType x);
void AddEdge(ALGraph& G, VertexType x, VertexType y);
void RemoveEdge(ALGraph& G, VertexType x, VertexType y);
int FirstNeighbor(ALGraph& G, VertexType x);
int NextNeighbor(ALGraph& G, VertexType x);
int GetIndex(AdjList vex, int num, VertexType x);
