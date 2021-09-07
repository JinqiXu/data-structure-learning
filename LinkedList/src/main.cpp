#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    LinkedList L;
    InitList(L);

    cout << Empty(L) << endl;

    for (int i = 1; i < 10; i++) {
        InsertList(L, i, i);
        cout << "i" << endl;
    }
    LNode* p = L;
    while (p->next != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
