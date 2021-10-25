#include "myFunc.h"
#include <cstdio>
#include <iostream>
using namespace std;

void ExpressionEvaluation();
bool isNumber(char ch);
char Caculate(char A, char B, char op);

int main()
{
    ExpressionEvaluation();
    return 0;
}

void ExpressionEvaluation()
{
    SqStack S;
    char res;
    char ch;
    while (cin >> ch) {

        if (isNumber(ch))
            Push(S, ch);
        else {
            char A, B;
            Pop(S, B);
            Pop(S, A);
            // char temp = Caculate(A, B, ch);
            // cout << temp << endl;
            Push(S, Caculate(A, B, ch));
        }

        if (cin.get() == '\n')
            break;
    }
    GetTop(S, res);
    cout << res - '0' << endl;
    return;
}

bool isNumber(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    // cout << "this is an operator" << endl;
    return false;
}

char Caculate(char A, char B, char OP)
{
    int a, b, op, res = 0;
    a = A - '0';
    b = B - '0';
    switch (OP) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        break;
    }
    char ch_res = res + '0';
    return ch_res;
}
