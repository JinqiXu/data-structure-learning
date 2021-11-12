#include "myFunc.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    ThreadTree T = NULL;
    char* node = (char*)malloc(sizeof(char) * MaxSize);
    scanf("%s", node);
    InitThreadTree(T, node);
    CreateInThread(T);
    InOrder(T);
    return 0;
}
