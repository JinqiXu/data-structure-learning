#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    SqList L;
    InitSqList(L);

    IncreaseSize(L, 5);
    cout << L.MaxSize << endl;

    int num;
    cout << "请输入初始化次数：" << endl;
    cin >> num;
    for (int i = 0; i < num; i++) {
        InsertList(L, i, i);
    }
    cout << L.length << endl;
    cout << GetElem(L, 4) << endl;
    cout << LocateElem(L, 5) << endl;

    return 0;
}
