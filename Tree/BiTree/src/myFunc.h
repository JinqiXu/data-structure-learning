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

//递归实现遍历
BiTree InitBiTree();
void PreOrder(BiTree T);
void InOrder(BiTree T);
void PostOrder(BiTree T);
void LevelOrder(BiTree T);

//非递归实现
void PreOrder2(BiTree T);
void InOrder2(BiTree T);
void PostOrder2(BiTree T);

//链队列
void InitQueue(LinkQueue& Q);
bool Empty(LinkQueue Q);
void EnQueue(LinkQueue& Q, BiTNode* e);
void DeQueue(LinkQueue& Q, BiTNode* e);
