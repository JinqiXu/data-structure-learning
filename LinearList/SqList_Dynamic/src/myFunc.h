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
bool InsertList(SqList& L, int i, ElemType e);
bool DeleteList(SqList& L, int i, ElemType& e);
ElemType GetElem(SqList L, int i);
int LocateElem(SqList L, ElemType e);
#endif
