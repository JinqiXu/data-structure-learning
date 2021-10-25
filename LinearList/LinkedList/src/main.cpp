#include "myFunc.h"
#include <iostream>

using namespace std;

int main()
{
    LinkedList L;

    // L = List_HeadInsert(L);
    L = List_TailInsert(L);
    Print(L);

    

    cout << GetElem(L, 4)->data << endl;
    cout << LocateElem(L, 5)->data << endl;
    cout << Length(L) << endl;

    ElemType e;
    DeleteList(L, 4, e);
    Print(L);
    DeleteList(L, 7, e);
    Print(L);

    return 0;
}
