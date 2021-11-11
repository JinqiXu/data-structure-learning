#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    BiTree T = InitBiTree();
    PreOrder(T);
    return 0;
}
