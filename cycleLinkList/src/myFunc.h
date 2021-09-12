#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
} LNode, *cycleLinkList;

bool InitList(cycleLinkList& L);
bool empty(cycleLinkList L);
bool isTail(cycleLinkList L, LNode* p);

#endif
