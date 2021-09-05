#include "myFunc.h"
#include <iostream>

using namespace std;

void InitSqList(SqList& L)
{
    L.length = 0;
    for (int i = 0; i < MAXSIZE; i++) {
        L.data[i] = 0;
    }
}

bool ListInsert(SqList& L, int i, int e)
{
    if (i >= MAXSIZE)
        return false;
    if (i < 1 || i > L.length + 1)
        return false;
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList& L, int i, int& e)
{
    if (i < 1 || i > L.length)
        return false;
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}
