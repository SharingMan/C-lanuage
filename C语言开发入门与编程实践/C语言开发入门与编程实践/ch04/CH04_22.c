#include <stdio.h>
#include <stdlib.h>

int main()
{
int input;
printf("请输入一个整数：");
scanf("%d", &input);/* 输入一个整数 */ 
if(input&1)/* input与1的&运算 */ 
printf("您输入奇数\n");
else
printf("您输入偶数\n");

system("pause");
return 0;
}
