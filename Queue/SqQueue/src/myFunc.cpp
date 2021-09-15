#include "myFunc.h"
#include <iostream>

using namespace std;

bool InitQueue(SqQueue& Q)
{
    Q.rear = Q.front = 0;
    return true;
}

bool EnQueue(SqQueue& Q, ElemType e)
{
    if ((Q.rear + 1) % MaxSize
        == Q.front) //牺牲掉一个位置，保证不会将空队列和满队列混淆
        return false;
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MaxSize; //队尾插入，队尾指针后移，不是队首指针前移
    return true;
}

bool DeQueue(SqQueue& Q, ElemType& e)
{
    if (Q.rear == Q.front)
        return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}
