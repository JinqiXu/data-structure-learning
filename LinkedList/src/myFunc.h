#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
} LNode, *LinkedList;

bool InitList(LinkedList& L);
bool Empty(LinkedList L);
bool InsertList(LinkedList& L, int i, ElemType e);
bool InsertNextNode(LNode* p, ElemType e);
bool InsertPriorNode(LNode* p, ElemType e);
bool DeleteList(LinkedList& L, int i, ElemType& e);
bool DeleteNode(LNode* p);
bool Print(LinkedList L);
LNode* GetElem(LinkedList L, int i);
LNode* LocateElem(LinkedList L, ElemType e);
int Length(LinkedList L);

#endif
