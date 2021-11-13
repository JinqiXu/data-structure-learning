#define MaxSize 105

typedef int ElemType;

typedef struct {
    ElemType data;
    int parent;
} PTNode;

typedef struct {
    PTNode nodes[MaxSize];
    int n;
} PTree;

typedef struct CSNode {
    ElemType data;
    struct CSNode *firstchild, *nextsibling;
} CSNode, *CSTree;
