#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

BiTree InitBiTree()
{
    BiTree root = (BiTNode*)malloc(sizeof(BiTNode));
    root->data = -1;
    root->lchild = NULL;
    root->rchild = NULL;
    return root;
}

void PreOrder(BiTree T)
{
    if (T != NULL) {
        cout << T->data << endl;
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void InOrder(BiTree T)
{
    if (T) {
        InOrder(T->lchild);
        cout << T->data << endl;
        InOrder(T->rchild);
    }
}

void PostOrder(BiTree T)
{
    if (T) {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        cout << T->data << endl;
    }
}

void LevelOrder(BiTree T)
{
    LinkQueue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);
    while (!Empty(Q)) {
        DeQueue(Q, p);
        if (p->lchild != NULL)
            EnQueue(Q, p->lchild);
        if (p->rchild != NULL)
            EnQueue(Q, p->rchild);
    }
}

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

void EnQueue(LinkQueue& Q, BiTNode* e)
{
    LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
    if (!p)
        return;
    p->data->data = e->data;

    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return;
}

void DeQueue(LinkQueue& Q, BiTNode* e)
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

void InOrder2(BiTree T)
{
    BiTree p = T;
    BiTNode* stack[MaxSize];
    int top = -1;
    while (p || top != -1) {
        if (p) {
            stack[++top] = p;
            p = p->lchild;
        } else {
            p = stack[top--];
            cout << p->data << " ";
            p = p->rchild;
        }
    }
    cout << endl;
}

void PreOrder2(BiTree T)
{
    BiTree p = T;
    BiTNode* stack[MaxSize];
    int top = -1;
    while (p || top != -1) {
        if (p) {
            cout << p->data << " ";
            stack[++top] = p;
            p = p->lchild;
        } else {
            p = stack[top--];
            p = p->rchild;
        }
    }
}

void PostOrder2(BiTree T)
{
    BiTree p = T, r = NULL;
    BiTNode* stack[MaxSize];
    int top = -1;
    while (p || top != -1) {
        if (p) {
            stack[++top] = p;
            p = p->lchild;
        } else {
            p = stack[top--];
            if (p->rchild && p->rchild != r)
                p = p->rchild;
            else {
                p = stack[top--];
                cout << p->data << " ";
                r = p;
                p = NULL;
            }
        }
    }
}
