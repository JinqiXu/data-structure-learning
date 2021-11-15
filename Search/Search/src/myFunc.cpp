#include "myFunc.h"
#include <iostream>

using namespace std;

int Search_Seq(SSTable ST, ElemType key)
{
    int i;
    for (i = 0; i < ST.TableLen && ST.elem[i] != key; i++)
        ;
    return i == ST.TableLen ? -1 : i;
}

int Binary_Search(SSTable ST, ElemType key)
{
    int low = 0, mid, high = ST.TableLen - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key > ST.elem[mid]) {
            low = mid + 1; //从后半部分开始
        } else if (key < ST.elem[mid]) {
            high = mid - 1; //从前半部分开始查找
        } else {
            return mid; //查找成功，返回
        }
    }
    return -1; //查找失败，返回-1
}
