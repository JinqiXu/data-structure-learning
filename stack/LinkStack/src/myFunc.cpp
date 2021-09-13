#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool InitLinkStack(LinkStack& L)
{
    L = (LNode*)malloc(sizeof(LNode));
    if (!L)
        return false;
    L->next = NULL;
    return true;
}

bool Empty(LinkStack L)
{
    if (L->next == NULL)
        return true;
    return false;
}

bool InsertNode(LinkStack& L, ElemType e)
{
    if (!L)
        return false;
    LNode* p = (LNode*)malloc(sizeof(LNode));
    if (!p)
        return false;
    p->next = L->next;
    p->data = e;
    L->next = p;
    return true;
}

bool DeleteNode(LinkStack& L, int i, ElemType& e)
{
    if (i < 1)
        return false;
    LNode* p = L->next;
    if (!p)
        return false;
    e = p->data;
    L->next = p->next;
    free(p);
    return true;
}

LNode* GetElem(LinkStack L, int i)
{
    if (i < 0)
        return NULL;
    LNode* p = L;
    int j = 1;
    while (p->next && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode* LocateElem(LinkStack& L, ElemType e)
{
    LNode* p = L->next;
    while (p != NULL && p->data != e)
        p = p->next;
    return p;
}

void Print(LinkStack L)
{
    LNode *p = L, *q = NULL;
    if (p == NULL)
        return;
    while (p->next != NULL) {
        q = p->next;
        cout << q->data << " ";
        p = p->next;
    }
    cout << endl;
    return;
}

int Length(LinkStack L)
{
    int length = 0;
    LNode* p = L;
    while (p->next != NULL) {
        p = p->next;
        length++;
    }
    return length;
}
