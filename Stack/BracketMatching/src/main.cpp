#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool Matching(char* str);

int main()
{
    char* str = (char*)malloc(sizeof(char) * 15);

    cin >> str;

    cout << Matching(str) << endl;

    return 0;
}

bool Matching(char* str)
{
    SqStack S;
    InitStack(S);
    ElemType e;
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
        case '[':
        case '{':
        case '(':
            Push(S, str[i]);
            break;
        case ')':
            Pop(S, e);
            if (e != '(')
                return false;
            break;
        case '}':
            Pop(S, e);
            if (e != '{')
                return false;
            break;
        case ']':
            Pop(S, e);
            if (e != '[')
                return false;
            break;
        }
    }
    if (S.top != -1)
        return false;
    return true;
}
