#include "myFunc.h"
#include <iostream>

using namespace std;
//空间复杂度为O(1):简单选择排序、插入排序、冒泡排序、希尔排序、堆排序
//快速排序使用辅助栈，空间复杂度为O(log2n)，最坏为O(n)
// 2路归并排序空间复杂度为O(n)

//稳定：插入排序、冒泡排序、归并排序、基数排序
//不稳定：简单选择排序、快速排序、希尔排序、堆排序

//移动趟数与序列的原始状态无关的排序方式：直接插入(n-1)、简单选择、基数
//移动次数与关键字比较次数无关：基数排序、选择排序
void InsertSort(ElemType A[], int n)
{
    //时间复杂度为O(n^2),最好可以达到O(n)
    int i, j;
    for (i = 2; i <= n; ++i) {
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
    //时间复杂度为O(n^2),比较次数为O(nlog2n)
    int low, high, mid, i, j, temp;
    for (i = 2; i <= n; i++) {
        temp = A[i];
        low = 1, high = i - 1;
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
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void ShellSort(ElemType A[], int n)
{
    //无精确的时间复杂度，
    int dk, i, j, temp;
    for (dk = n / 2; dk >= 1; dk = dk / 2) {
        for (i = dk + 1; i <= n; i++) {
            if (A[i] < A[i - dk]) {
                temp = A[i];
                for (j = i - dk; j > 0 && A[j] > temp; j -= dk) {
                    A[j + dk] = A[j];
                }
                A[j + dk] = temp;
            }
        }
    }
}

void Swap(int& a, int& b)
{
    if (a == b)
        return;
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSort(ElemType A[], int n)
{
    //时间复杂度平均为O(n^2),最好可以达到O(n)
    int i, j, temp;
    bool flag;
    for (i = 1; i < n; i++) {
        flag = false;
        //从前往后
        /*for (j = i + 1; j <= n; j++) {
            if (A[j] < A[j - 1]) {
                temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = true;
            }
        }*/
        //从后往前
        for (j = n; j > i; j--) {
            if (A[j] < A[j - 1]) {
                temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = true;
            }
        }

        if (flag == false)
            break;
    }
    return;
}

ElemType Partition(ElemType A[], int low, int high)
{
    ElemType pivot = A[low];
    while (low < high) {
        while (low < high && A[high] >= pivot) {
            high--;
        }
        A[low] = A[high];
        while (low < high && A[low] <= pivot) {
            low++;
        }
        A[high] = A[low];
    }
    A[low] = pivot;

    return low;
}

void QuickSort(ElemType A[], int low, int high)
{
    if (low >= high)
        return;
    int pivotpos = Partition(A, low, high);
    QuickSort(A, low, pivotpos - 1);
    QuickSort(A, pivotpos + 1, high);
}

void QSort(ElemType A[], int n)
{
    //平均时间复杂度为O(nlog2n),最坏时间复杂度为O(n^2),实际应用优于其他排序算法
    QuickSort(A, 1, n);
}

void SelectSort(ElemType A[], int n)
{
    //时间复杂度为O(n^2),与序列的初始状态无关
    int i, j, min;
    for (i = 1; i < n; i++) {
        min = i;
        for (j = i + 1; j <= n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        Swap(A[min], A[i]);
    }
}

void HeadAdjust(ElemType A[], int k, int len)
{
    int i, j;
    A[0] = A[k];
    for (i = k * 2; i <= len; i *= 2) {
        if (A[i] < A[i + 1] && i < len)
            i++;
        if (A[0] > A[i])
            break;
        else {
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

void BuildHeap(ElemType A[], int n)
{
    for (int i = n / 2; i > 0; i--) {
        HeadAdjust(A, i, n);
    }
}

void HeapSort(ElemType A[], int n)
{
    //利用堆的数据结构，时间复杂度为O(nlog2n)
    BuildHeap(A, n);
    for (int i = n; i > 1; i--) {
        Swap(A[1], A[i]);
        HeadAdjust(A, 1, i - 1);
    }
}

void Merge(ElemType A[], int low, int mid, int high)
{
    ElemType* B = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
    for (int i = low; i <= high; i++) {
        B[i] = A[i];
    }

    int i, j, k;
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (B[i] <= B[j]) {
            A[k] = B[i++];
        } else {
            A[k] = B[j++];
        }
    }
    while (i <= mid)
        A[k++] = B[i++];
    while (j <= high)
        A[k++] = B[j++];
}

void MSort(ElemType A[], int low, int high)
{
    if (low < high) {
        int mid = (low + high) / 2;
        MSort(A, low, mid);
        MSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

void MergeSort(ElemType A[], int n)
{
    //基于分治的思想，分割子序列与初始序列的排列无关，最好、最坏、平均时间复杂度为O(nlog2n)
    MSort(A, 1, n);
}

void DoubleBubbleSort(ElemType A[], int n)
{
    int low = 1, high = n, i;
    bool flag = true;

    while (low < high && flag) {
        flag = false;

        for (i = low; i < high; i++) {
            if (A[i] > A[i + 1]) {
                Swap(A[i], A[i + 1]);
                flag = true;
            }
        }
        high--;

        for (i = high; i > low; i--) {
            if (A[i] < A[i - 1]) {
                Swap(A[i], A[i - 1]);
                flag = true;
            }
        }
        low++;
    }
}

void Move(ElemType A[], int n)
{
    int low = 1, high = n;

    while (low < high) {
        while (low < high && A[low] % 2 == 1) {
            low++;
        }
        while (low < high && A[high] % 2 == 0) {
            high--;
        }
        if (low < high) {
            Swap(A[low], A[high]);

            low++;
            high--;
        }
    }
}
