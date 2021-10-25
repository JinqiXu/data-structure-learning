#ifndef __FUNC_H__
#define __FUNC_H__

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode* next;
} LNode, *LinkList;

bool Link_2_3_1(LinkList L, ElemType x);

#endif
