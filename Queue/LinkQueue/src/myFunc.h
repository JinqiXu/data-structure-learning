typedef int ElemType;

typedef struct LinkNode {
    ElemType data;
    struct LinkNode* next;
} LinkNode;

typedef struct {
    LinkNode *front, *rear;
} LinkQueue;

void InitQueue(LinkQueue& Q);
bool Empty(LinkQueue Q);
void EnQueue(LinkQueue& Q, ElemType e);
void DeQueue(LinkQueue& Q, ElemType& e);
