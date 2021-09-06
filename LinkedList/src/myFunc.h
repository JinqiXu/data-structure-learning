#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
} LNode, *LinkedList;

bool InitList(LinkedList& L);
bool Empty(LinkedList L);

#endif
