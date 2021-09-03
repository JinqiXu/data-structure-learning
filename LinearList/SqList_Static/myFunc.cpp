#include "myFunc.h"
#include <iostream>

using namespace std;

void InitSqList(SqList& L)
{
    L.length = 0;
    for (int i = 0; i < MAXSIZE; i++) {
        L.data[i] = 0;
    }
}
