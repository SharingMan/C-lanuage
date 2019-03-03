#include <stdio.h>
#include <stdlib.h>
#include "CH07_20_1.c"

int x; /* 声明x为全局域变量 */ 
int main()
{
    foo(); /* 调用另一个程序档案中的函数 */ 
    printf( "x = %d\n",x);
    
    system("pause");
    return 0;
}
