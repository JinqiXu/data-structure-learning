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
        cout << i << " ";
    }
    cout << endl;
    Print(L);

    ElemType e;
    DeleteList(L, 4, e);
    Print(L);
    DeleteList(L, 7, e);
    Print(L);

    return 0;
}
