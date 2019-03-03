#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c1;
    char c2;   
    
    printf("请由键盘输入汉字,输入后请按Enter键：");
    c1=getchar();
    c2=getchar();/* 读取两次字符  */ 
    printf("所输入的汉字为：");
    putchar(c1);
    putchar(c2); /* 利用putchar函数输出汉字 */ 
    printf("\n");
    system("pause");
    return 0; 
}
