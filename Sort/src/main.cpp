#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    ElemType A[10] = { 0, 49, 38, 65, 97, 76, 13, 27, 48 };
    // ElemType A[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2 };

    cout << "排序前:" << endl;
    Print(A, 8);
    // InsertSort(A, 10);
    // Half_InsertSort(A, 10);
    // ShellSort(A, 10);
    // BubbleSort(A, 10);
    // QSort(A, 8);
    // SelectSort(A, 8);
    // HeapSort(A, 8);
    // MergeSort(A, 8);
    // DoubleBubbleSort(A, 8);
    Move(A, 8);
    cout << "排序后:" << endl;
    Print(A, 8);
    return 0;
}
