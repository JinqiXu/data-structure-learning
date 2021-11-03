#include "myFunc.h"
#include <iostream>
using namespace std;

int main()
{
    SString S;
    char str[MaxSize] = "Hello World!";

    StrAssign(S, str, 12);
    cout << StrEmpty(S) << endl << StrLength(S) << endl;
    SString T;
    StrAssign(T, "World", 5);
    cout << Index(S, T) << endl;
    return 0;
}
