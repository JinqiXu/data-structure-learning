#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
} LNode, *LinkStack;

bool InitLinkStack(LinkStack& L);
bool Empty(LinkStack L);
bool InsertNode(LinkStack& L, ElemType e);
bool DeleteNode(LinkStack& L, int i, ElemType& e);
LNode* GetElem(LinkStack L, int i);
LNode* LocateElem(LinkStack L, ElemType e);
void Print(LinkStack L);
int Length(LinkStack L);

#endif
