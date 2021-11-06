#include "myFunc.h"
#include <iostream>

using namespace std;

void StrAssign(SString& T, char s[], int len)
{
    int i = 0;
    // cout << len << endl;
    for (i = 0; i < len; i++) {
        T.ch[i + 1] = s[i];
    }
    T.length = len;

    // cout << "Assign " << endl;
    // cout << T.length << endl;
}
void StrCopy(SString& T, SString S)
{
    for (int i = 1; i <= S.length; i++) {

        T.ch[i] = S.ch[i];
    }
    T.length = S.length;
}

bool StrEmpty(SString S)
{
    if (S.length == 0)
        return false;
    return true;
}

int StrCompare(SString S, SString T)
{
    int flag = 0;
    for (int i = 1; i <= S.length; i++) {
        if (S.ch[i] > T.ch[i]) {
            flag = 1;
            break;
        } else if (S.ch[i] < T.ch[i]) {
            flag = -1;
            break;
        }
    }
    return flag;
}

int StrLength(SString S) { return S.length; }

void SubString(SString& T, SString S, int pos, int len)
{
    for (int i = pos, j = 1; i <= S.length || j <= len; i++, j++) {
        T.ch[j] = S.ch[i];
    }
    T.length = len;
}

void Concat(SString& T, SString S1, SString S2)
{
    int i = 1;
    for (; i <= S1.length; i++) {
        T.ch[i] = S1.ch[i];
    }
    T.length = S1.length;
    for (i = 1; i <= S2.length; i++) {
        T.ch[i + T.length] = S2.ch[i];
    }
}

int Index(SString S, SString T)
{
    int i = 1;
    SString sub;
    while (i <= S.length - T.length + 1) {
        SubString(sub, S, i, T.length);
        if (StrCompare(sub, T) != 0)
            ++i;
        else
            return i;
    }
    return 0;
}

int Index_KMP(SString S, SString T)
{
    int i = 1, j = 1;
    int next[MaxSize];
    Get_Next(T, next);
    while (i <= S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            i++;
            j++;
        } else {
            j = next[i];
        }
    }
    if (j > T.length)
        return i - T.length;
    else
        return 0;
}

void Get_Next(SString T, int next[])
{
    int i = 1;
    int j = 0;
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
}

void Get_Nextval(SString T, int nextval[])
{
    int i = 1, j = 0;
    nextval[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            if (T.ch[i] != T.ch[j])
                nextval[i] = j;
            else
                nextval[i] = nextval[j];
        } else
            j = nextval[j];
    }
}
