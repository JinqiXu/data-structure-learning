
#define MaxSize 100

typedef char ElemType;

typedef struct {
    ElemType data[MaxSize];
    int top;
} SqStack;

/*
 * typedef struct{
 * ElemType data[MaxSize];
 * int top0;
 * int top1;
 * }ShStack;共享栈
 * 判断栈满：top0+1=top1;
 */

void InitStack(SqStack& S);
bool Push(SqStack& S, ElemType e);
bool Pop(SqStack& S, ElemType& e);
bool GetTop(SqStack& S, ElemType& e);
void Transe(char str[]);
