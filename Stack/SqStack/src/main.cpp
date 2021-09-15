#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    SqStack S;
    InitStack(S);
    for (int i = 0; i < 5; i++)
        Push(S, i);

    ElemType e;
    while (Pop(S, e)) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
