#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    SqQueue Q;
    InitQueue(Q);

    for (int i = 0; i < 5; i++) {
        EnQueue(Q, i);
    }

    ElemType e;
    while (DeQueue(Q, e)) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
