#include "myFunc.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#define LOW 0
#define HIGH 1

void ExpressionEvaluation();
bool isNumber(char ch);
char Caculate(char A, char B, char op);
int Tranverse(char str[], int Length, char res[]);
int PriorityJudge(char ch);
bool Judgement(char ch1, char ch2);
void Print(char ch[], int Length);

int main()
{
    ExpressionEvaluation();
    return 0;
}

void ExpressionEvaluation()
{
    SqStack S;
    InitStack(S);
    char res;
    char ch;
    int Length = 0;
    char str[MaxSize];
    while (cin >> ch) {
        str[Length++] = ch;
        // cout << "in ch" << endl;
        if (cin.get() == '\n')
            break;
    }
    Print(str, Length);

    char suffix_expression[MaxSize];
    int newLength = Tranverse(str, Length, suffix_expression);
    Print(suffix_expression, newLength);

    for (int i = 0; i < newLength; i++) {

        if (isNumber(suffix_expression[i]))
            Push(S, suffix_expression[i]);
        else {
            // cout << "1" << endl;
            char A, B;
            Pop(S, B);
            Pop(S, A);
            // char temp = Caculate(A, B, ch);
            // cout << temp << endl;
            Push(S, Caculate(A, B, suffix_expression[i]));
            // cout << suffix_expression[i] << endl;
        }
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

int Tranverse(char str[], int Length, char res[])
{
    // cout << "Start Tranverse" << endl;
    SqStack S;
    InitStack(S);
    int j = 0, flag = 0;
    for (int i = 0; i < Length; i++) {
        if (isNumber(str[i])) {
            res[j++] = str[i];
            // cout << "Judege Number" << endl;
        } else {
            // cout << "start do operator" << endl;
            if (S.top == -1) {
                // cout << "start push" << endl;
                Push(S, str[i]);
                // cout << "Push operator" << endl;
            } else if (str[i] == '(') {
                cout << "this is (" << endl;
                Push(S, str[i]);
                flag++;
            } else if (str[i] == ')') {
                char TopValue;
                cout << "this is )" << endl;
                while (1) {
                    GetTop(S, TopValue);
                    cout << "TopValue " << TopValue << S.top << endl;
                    if (TopValue == '(') {
                        cout << "Pop (" << endl;
                        Pop(S, TopValue);
                        cout << TopValue << endl;
                        flag--;
                        break;
                    }
                    Pop(S, res[j++]);
                    cout << res[j - 1] << endl;
                }
            } else {
                char TopValue;
                GetTop(S, TopValue);
                if (flag != 0) {
                    Push(S, str[i]);
                    continue;
                }
                // cout << "TopValue: " << TopValue << endl;
                if (Judgement(TopValue, str[i])) {
                    Pop(S, res[j++]);
                    Push(S, str[i]);
                    // cout << "Judege Priority" << endl;
                } else {
                    Push(S, str[i]);
                }
            }
        }
    }
    while (S.top != -1) {
        Pop(S, res[j++]);
    }
    return j;
    // Print(res, Length);
} //表达式中无括号的情况

int PriorityJudge(char ch)
{
    bool res;
    if (ch == '+' || ch == '-') {
        res = LOW;
    } else
        res = HIGH;
    return res;
}

bool Judgement(char ch1, char ch2)
{
    // cout << "Judgement" << endl;
    return (PriorityJudge(ch1) >= PriorityJudge(ch2));
}

void Print(char ch[], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << ch[i] << " ";
    cout << endl;
}
