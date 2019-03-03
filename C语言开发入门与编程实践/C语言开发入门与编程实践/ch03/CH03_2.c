#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 栏宽设定为4,打印整数 */ 
    printf("%4d\n",123);
    printf("%*d\n",4,123);
    /* 栏宽设定为4,打印字符串 */ 
    printf("%*s\n",4,"***");
    printf("%4s\n","***");
    /* 栏宽设定为5,打印字符串 */ 
    printf("%*s\n",5,"===");
    printf("%5s\n","===");
    system("pause");
    return 0;
}
