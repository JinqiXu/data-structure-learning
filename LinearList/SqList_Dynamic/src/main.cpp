#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    SqList L;
    InitSqList(L);

    IncreaseSize(L, 5);
    cout << L.MaxSize << endl;
    return 0;
}
