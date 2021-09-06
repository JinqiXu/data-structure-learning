#include "myFunc.h"
#include <cstdlib>
#include <iostream>

void InitSqList(SqList& L)
{
    L.data = (ElemType*)malloc(InitSize * sizeof(ElemType));
    L.length = 0;
    L.MaxSize = InitSize;
}

void IncreaseSize(SqList& L, int len)
{
    ElemType* p = L.data;
    L.data = (ElemType*)malloc((L.MaxSize + len) * sizeof(ElemType));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize += len;
    free(p);
    return;
}

bool InsertList(SqList& L, int i, ElemType e)
{
    if (i > L.MaxSize)
        return false;
    if (i < 0 || i > L.length + 1)
        return false;
    if (i == L.MaxSize)
        IncreaseSize(L, 5);
    for (int j = L.length - 1; j >= i; j--) {
        L.data[j + 1] = L.data[j];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool DeleteList(SqList& L, int i, ElemType& e)
{
    if (i < 0 || i > L.length + 1)
        return false;
    e = L.data[i - 1];
    for (int j = i - 1; j < L.length - 1; j++)
        L.data[j] = L.data[j + 1];
    L.length--;
    return true;
}

ElemType GetElem(SqList L, int i) { return L.data[i - 1]; }

int LocateElem(SqList L, ElemType e)
{
    for (int i = 0; i < i < L.length; i++) {
        if (L.data[i] == e)
            return i + 1;
    }
    return 0;
}
