#include <stdio.h>

void test(int& x)
{
    x = 1024;
    printf("函数内部x=%d\n", x);
}

/*
void test(int x)
{
    x=1024;
    printf("函数内部x=%d\n",x);
}
*/
int main()
{
    int x = 1;
    printf("调用前x=%d\n", x);
    test(x);
    printf("调用后x=%d\n", x);
    printf("%ld %ld %ld\n", sizeof(int), sizeof(double), sizeof(float));
    return 0;
}
