#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool InitList(LinkedList& L)
{
    LNode* p = (LNode*)malloc(sizeof(LNode));
    if (!L)
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
