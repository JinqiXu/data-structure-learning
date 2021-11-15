#define MaxSize 105

typedef int ElemType;

typedef struct {
    ElemType* elem;
    int TableLen;
} SSTable;

int Search_Seq(SSTable ST, ElemType key);
int Binary_Search(SSTable ST, ElemType key);
