#include "func.h"
#include <cstdlib>
#include <iostream>
using namespace std;

bool Link_2_3_1(LinkList& L, ElemType x)
{
    if (!L)
        return false;
    LNode* p = L;
    while (p->next) {

        LNode* q = p->next;
        if (p->next->data == x) {
            p->next = q->next;
            free(q);
        }
        p = p->next;
    }
    return true;
}
