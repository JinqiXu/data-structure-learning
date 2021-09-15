#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    LinkStack L;
    bool res = InitLinkStack(L);
    if (res == false)
        cout << "创建栈失败\n";

    for (int i = 0; i < 10; i++) {
        InsertNode(L, i);
    }
    Print(L);
    return 0;
}
