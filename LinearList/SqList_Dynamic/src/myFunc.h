#ifndef __MYFUNC_H__
#define __MYFUNC_H__

#define InitSize 10

typedef int ElemType;

typedef struct {
    ElemType* data;
    int MaxSize;
    int length;
} SqList;

void InitSqList(SqList& L);
void IncreaseSize(SqList& L, int len);

#endif
