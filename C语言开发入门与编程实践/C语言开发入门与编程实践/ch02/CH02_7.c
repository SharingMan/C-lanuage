#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=9,b=15; /* 声明两个操作数 */ 
	/*比较操作符运算关系*/
    printf("a=11 , b=15\n");
    printf("比较结果为真,则为1...比较结果为假,则为0\n"); 
    printf("a>b,比较结果为 %d 值\n",a>b);
    printf("a<b,比较结果为 %d 值\n",a<b);
    printf("a==b,比较结果为 %d 值\n",a==b);
    printf("a!=b,比较结果为 %d 值\n",a!=b);
    printf("a>=b,比较结果为 %d 值\n",a>=b);
    printf("a<=b,比较结果为 %d 值\n",a<=b);
    
    system("pause");    
    return 0;
}
