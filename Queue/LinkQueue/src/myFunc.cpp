#include "myFunc.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void InitQueue(LinkQueue& Q)
{
    Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool Empty(LinkQueue Q)
{
    if (Q.front == Q.rear)
        return true;
    return false;
}

void EnQueue(LinkQueue& Q, ElemType e)
{
    LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
    if (!p)
        return;
    p->data = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return;
}

void DeQueue(LinkQueue& Q, ElemType& e)
{
    if (Q.rear == Q.front)
        return;
    LinkNode* p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if (Q.rear == p)
        Q.rear = Q.front;
    free(p);
    return;
}
