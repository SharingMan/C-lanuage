#include<stdio.h>
#include<stdlib.h>

int sum(int);
int sum1(int);/* 函数原型声明 */ 
int main()
{	
	int n;
	
	printf("第一次调用\n"); 
 	printf("一般变量函数:%d\t",sum(5));
  	printf("静态变量函数:%d\n\n",sum1(5));
	printf("第二次调用\n"); 
    printf("一般变量函数:%d\t",sum(10));
  	printf("静态变量函数:%d\n\n",sum1(10));
  	printf("第三次调用\n"); 
 	printf("一般变量函数:%d\t",sum(15));
  	printf("静态变量函数:%d\n",sum1(15));
    
    system("pause");
    return 0;	
}
/*一般的变量函数*/
int sum(int n)
{ 
	int sum=0; /* 初始值设定为0 */
	sum+=n;
	return sum;
}
/*静态变量的函数*/
int sum1(int n)
{
	/*声明静态变量sum*/
	static int sum;
	sum+=n;
 	return sum;
}
