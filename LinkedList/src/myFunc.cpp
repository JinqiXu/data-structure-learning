#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool InitList(LinkedList& L)
{
    LNode* p = (LNode*)malloc(sizeof(LNode));
    if (L == NULL)
        return false;
    L->next = NULL;
    return true;
}

bool Empty(LinkedList L)
{
    if (L->next == NULL)
        return true;
    return false;
}

bool InsertList(LinkedList& L, int i, ElemType e)
{
    if (i < 1)
        return false;
    LNode* p;
    int j = 0;
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL)
        return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

bool InsertNextNode(LNode* p, ElemType e)
{
    if (p == NULL)
        return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    if (q == NULL)
        return false;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

bool InsertPriorNode(LNode* p, ElemType e)
{
    if (p == NULL)
        return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    if (q == NULL)
        return false;
    q->next = p->next;
    q->data = p->data;
    p->data = e;
    p->next = q;
    return true;
}

bool DeleteList(LinkedList& L, int i, ElemType& e)
{
    if (i < 1)
        return false;
    LNode* p = L;
    int j = 0;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL || p->next == NULL)
        return false;
    LNode* q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool DeleteNode(LNode* p)
{
    if (p == NULL)
        return false;
    //当p为最后一个结点时，下方法错误，必须由循环找到所找的结点
    LNode* q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool Print(LinkedList L)
{
    LNode *p = L, *q = NULL;
    if (p == NULL)
        return false;
    while (p->next != NULL) {
        q = p->next;
        cout << q->data << " ";
        p = p->next;
    }
    cout << endl;
    return true;
}
