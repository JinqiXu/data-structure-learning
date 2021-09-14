#define MaxSize 10

typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int front, rear;
    //添加size表示元素数目
    //添加tag表示最近执行的操作
} SqQueue;

bool InitQueue(SqQueue& Q);
bool EnQueue(SqQueue& Q, ElemType e);
bool DeQueue(SqQueue& Q, ElemType& e);
