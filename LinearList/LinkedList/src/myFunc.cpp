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
    LNode* p = GetElem(L, i - 1);
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
    LNode* p = GetElem(L, i - 1);
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

LNode* GetElem(LinkedList L, int i)
{
    if (i < 0)
        return NULL;
    LNode* p = L;
    int j = 0;
    while (p->next != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode* LocateElem(LinkedList L, ElemType e)
{
    LNode* p = L->next;
    while (p != NULL && p->data != e)
        p = p->next;
    return p;
}

int Length(LinkedList L)
{
    int length = 0;
    LNode* p = L;
    while (p->next != NULL) {
        p = p->next;
        length++;
    }
    return length;
}

LinkedList List_TailInsert(LinkedList& L)
{
    int x;
    L = (LinkedList)malloc(sizeof(LNode));
    LNode *r = L, *s = L;
    cin >> x;
    while (x != -1) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        cin >> x;
    }
    r->next = NULL;
    return L;
}

LinkedList List_HeadInsert(LinkedList& L)
{
    LNode* s;
    int x;
    L = (LinkedList)malloc(sizeof(LNode));
    L->next = NULL;
    cin >> x;
    while (x != -1) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    return L;
}
