#define MaxSize 105

typedef char VertexType;
typedef int EdgeType;

typedef struct {
    VertexType Vex[MaxSize];
    EdgeType Edge[MaxSize][MaxSize];
    int vexnum, arcnum;
} MGraph;

bool visited[MaxSize];
int d[MaxSize];

bool Adjacent(MGraph& G, VertexType x, VertexType y);
void Neighbors(MGraph& G, VertexType x);
void InsertVertex(MGraph& G, VertexType x);
void DeleteVertex(MGraph& G, VertexType x);
void AddEdge(MGraph& G, VertexType x, VertexType y);
int GetIndex(VertexType vex[], int num, VertexType x);
void RemoveEdge(MGraph& G, VertexType x, VertexType y);
int FirstNeighbor(MGraph G, VertexType x);
int NextNeighbor(MGraph G, VertexType x, VertexType y);

void BFSTraverse(MGraph G);
void BFS(MGraph G, int v);
void visit(VertexType v);

void BFS_MIN_DISTANCE(MGraph G, int u);
