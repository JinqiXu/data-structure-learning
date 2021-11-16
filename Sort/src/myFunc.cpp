#include "myFunc.h"
#include <iostream>

using namespace std;

void InsertSort(ElemType A[], int n)
{
    int i, j;
    for (i = 1; i < n; ++i) {
        if (A[i] < A[i - 1]) {
            int temp = A[i];
            for (j = i - 1; j >= 0 && temp < A[j]; --j) {
                A[j + 1] = A[j];
            }
            A[j + 1] = temp;
        }
    }
}

void Half_InsertSort(ElemType A[], int n)
{
    int low, high, mid, i, j, temp;
    for (i = 1; i < n; i++) {
        temp = A[i];
        low = 0, high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            (A[mid] > temp) ? high = mid - 1 : low = mid + 1;
        }
        for (j = i - 1; j > high; --j) {
            A[j + 1] = A[j];
        }
        A[j + 1] = temp;
    }
}

void Print(ElemType A[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void ShellSort(ElemType A[], int n)
{
    int dk, i, j, temp;
    for (dk = n / 2; dk >= 1; dk = dk / 2) {
        for (i = dk; i < n; i++) {
            if (A[i] < A[i - dk]) {
                temp = A[i];
                for (j = i - dk; j >= 0 && A[j] > temp; j -= dk) {
                    A[j + dk] = A[j];
                }
                A[j + dk] = temp;
            }
        }
    }
}
