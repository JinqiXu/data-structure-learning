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
