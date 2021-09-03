#include "myFunc.h"
#include <iostream>
using namespace std;

int main()
{
    SqList L;
    InitSqList(L);

    cout << L.data[10] << endl;
    cout << L.length << endl;
    return 0;
}
