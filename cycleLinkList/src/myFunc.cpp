#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool InitList(cycleLinkList& L)
{
    L = (LNode*)malloc(sizeof(LNode));
    if (L == NULL)
        return false;
    L->next = L;
    return true;
}

bool empty(cycleLinkList L)
{
    if (L->next == L)
        return true;
    return false;
}

bool isTail(cycleLinkList L, LNode* p)
{
    if (p->next == L)
        return true;
    return false;
}
