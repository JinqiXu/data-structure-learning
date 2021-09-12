#ifndef __MYFUNC_H__
#define __MYFUNC_H__

typedef int ElemType;
#define MaxSize 15

typedef struct Node {
    ElemType data;
    int next;
} SLinkList[MaxSize];

#endif
