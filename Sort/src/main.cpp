#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    ElemType A[10] = { 19, 1, 6, 31, 8, 15, 2, 90, 17, 102 };

    cout << "排序前:" << endl;
    Print(A, 10);
    // InsertSort(A, 10);
    // Half_InsertSort(A, 10);
    ShellSort(A, 10);
    cout << "排序后:" << endl;
    Print(A, 10);
    return 0;
}
