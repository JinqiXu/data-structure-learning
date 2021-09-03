#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;
constexpr auto MAXSIZE = 15;

//顺序表的基本结构
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;

//定义顺序表的基本操作函数
void InitSqList(SqList& L);
void DestroySqList(SqList& L);

#endif
