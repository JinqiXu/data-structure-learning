#define MaxSize 105

typedef char ElemType;

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag, rtag;
    bool l, r;
} ThreadNode, *ThreadTree;

/*
typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
    bool l, r;
} BiTNode, *BiTree;
*/

void InThreadTree(ThreadTree& p, ThreadTree& pre);
void CreateInThread(ThreadTree T);
ThreadNode* FirstNode(ThreadNode* p);
ThreadNode* NextNode(ThreadNode* p);
void InOrder(ThreadNode* T);

ThreadNode* CreateNode(ElemType e);
void InitThreadTree(ThreadTree& T, char* node);

void PreThreadTree(ThreadTree& p, ThreadTree& pre);
void CreatePreThread(ThreadTree T);
void PreOrder(ThreadNode* T);

void PostThreadTree(ThreadTree& p, ThreadTree& pre);
void CreatePostThread(ThreadTree T);
void PostOrder(ThreadNode* T);
