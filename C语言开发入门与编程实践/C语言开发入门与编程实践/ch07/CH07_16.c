#include <stdio.h>
#include <stdlib.h>

void foo(void);  /* 无意义的函数，用来显示局部变量值 */

int x = 10; /* 声明全局域变量 x  */ 

int main(void)
{
    printf( "全局域变量 x = %d\n", x );
    foo();
    printf( "全局域变量 x = %d\n", x );

    system("pause");
    return 0;
}

void foo(void)
{
    int x = 20;/* 声明局部变量 x */ 

    printf( "局部变量 x = %d\n", x );
}
