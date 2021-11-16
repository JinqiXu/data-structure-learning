#define MaxSize 105

typedef int ElemType;

void InsertSort(ElemType A[], int n);
void Half_InsertSort(ElemType A[], int n);
void ShellSort(ElemType A[], int n);
void BubbleSort(ElemType A[], int n);
ElemType Partition(ElemType A[], int low, int high);
void QSort(ElemType A[], int n);
void QuickSort(ElemType A[], int low, int high);

void SelectSort(ElemType A[], int n);

void HeadAdjust(ElemType A[], int k, int len);
void BuildHeap(ElemType A[], int n);
void HeapSort(ElemType A[], int n);
void Merge(ElemType A[], int low, int mid, int high);
void MergeSort(ElemType A[], int n);
void MSort(ElemType A[], int low, int high);

void Print(ElemType A[], int n);
void Swap(int& a, int& b);
