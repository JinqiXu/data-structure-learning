#include "myFunc.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

void InThreadTree(ThreadTree& p, ThreadTree& pre)
{
    if (p != NULL) {
        InThreadTree(p->lchild, pre);
        if (p->lchild == NULL) {
            p->lchild = pre;
            p->ltag = 1;
        }
        if (pre != NULL && pre->rchild == NULL) {
            pre->rchild = p;
            pre->rtag = 1;
        }
        pre = p;
        InThreadTree(p->rchild, pre);
    }
}

void CreateInThread(ThreadTree T)
{
    ThreadTree pre = NULL;
    if (T != NULL) {
        InThreadTree(T, pre);
        pre->rchild = NULL;
        pre->rtag = 1;
    }
}

ThreadNode* FirstNode(ThreadNode* p)
{
    while (p->ltag == 0)
        p = p->lchild;
    return p;
}

ThreadNode* NextNode(ThreadNode* p)
{
    if (p->rtag == 0) {
        return FirstNode(p->rchild);
    } else
        return p->rchild;
}

void InOrder(ThreadNode* T)
{
    for (ThreadNode* p = FirstNode(T); p != NULL; p = NextNode(p))
        cout << p->data << " ";
}

ThreadNode* CreateNode(ElemType e)
{
    ThreadNode* p = (ThreadNode*)malloc(sizeof(ThreadNode));
    if (!p)
        return p;
    p->data = e;
    p->lchild = NULL;
    p->rchild = NULL;
    p->l = false;
    p->r = false;
    return p;
}

void InitThreadTree(ThreadTree& T, char* node)
{
    ThreadNode *stack[MaxSize], *p, *q;
    int i = 1;
    if (node[0] == '*') {
        T = NULL;
        return;
    }
    p = CreateNode(node[0]);
    T = p;
    int top = 1;
    stack[top] = p;
    int node_len = strlen(node);
    while (i < node_len) {
        if (node[i] != '*' && p->l == false) {
            q = CreateNode(node[i]);
            if (!q)
                return;
            p->l = true;
            p->lchild = q;
            p = p->lchild;
            stack[++top] = p;
            i++;
        } else if (node[i] != '*' && p->r == false) {
            q = CreateNode(node[i]);
            if (!q)
                return;
            p->r = true;
            p->rchild = q;
            stack[++top] = p;
            i++;
        } else if (node[i] == '*' && p->l == false) {
            p->l = true;
            i++;
        } else if (node[i] == '*' && p->r == false) {
            p->r = true;
            i++;
        }
        if (p->r && p->l) {
            p = stack[top--];
        }
    }
    return;
}
