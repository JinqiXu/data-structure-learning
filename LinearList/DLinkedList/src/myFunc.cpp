#include "myFunc.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

bool InitDLinkedList(DLinkedList& L)
{
    L = (DNode*)malloc(sizeof(DNode));
    if (!L)
        return false;
    L->prior = NULL;
    L->next = NULL;
    return true;
}

bool Empty(DLinkedList L)
{
    if (L->next)
        return false;
    return true;
}

bool InsertNextDNode(DNode* p, DNode* s)
{
    if (!p || !s)
        return false;

    s->next = p->next;
    if (p->next)
        p->next->prior = s;
    p->next = s;
    s->prior = p;
    return true;
}

bool DeleteNextDNode(DNode* p)
{
    if (!p)
        return false;
    DNode* q = p->next;
    if (!q)
        return false;
    p->next = q->next;
    if (q->next)
        q->next->prior = p;
    free(q);
    return true;
}

bool DestroyDLinkedList(DLinkedList& L)
{
    if (!L)
        return false;
    while (!L->next) {
        DeleteNextDNode(L);
    }
    free(L);
    L = NULL;
    return true;
}
