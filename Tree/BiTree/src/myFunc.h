#define MaxSize 105

typedef int ElemType;

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;


typedef struct LinkNode {
    BiTNode* data;
    struct LinkNode* next;
} LinkNode;

typedef struct {
    LinkNode *front, *rear;
} LinkQueue;

BiTree InitBiTree();
void PreOrder(BiTree T);
void InOrder(BiTree T);
void PostOrder(BiTree T);
/*
void LevelOrder(BiTree T);


void InitQueue(LinkQueue& Q);
bool Empty(LinkQueue Q);
void EnQueue(LinkQueue& Q, ElemType e);
void DeQueue(LinkQueue& Q, ElemType& e);*/
