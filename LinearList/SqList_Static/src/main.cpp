#include "myFunc.h"
#include <iostream>
using namespace std;

int main()
{
    SqList L;
    InitSqList(L);

    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListInsert(L, 3, 3);

    // cout << L.data[10] << endl;
    // cout << L.length << endl;
    for (int i = 0; i < L.length; i++) {
        cout << i + 1 << ":" << L.data[i] << endl;
    }

    int e = -1;
    ListDelete(L, 3, e);
    for (int i = 0; i < L.length; i++) {
        cout << i + 1 << ":" << L.data[i] << endl;
    }
    return 0;
}
