#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;

typedef struct DNode {
    ElemType data;
    struct DNode *prior, *next;
} DNode, *DLinkedList;

bool InitDLinkedList(DLinkedList& L);
bool Empty(DLinkedList L);
bool InsertNextDNode(DNode* p, DNode* s);
bool DeleteNextDNode(DNode* p);
bool DestroyDLinkedList(DLinkedList& L);

#endif
