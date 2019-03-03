#include<stdio.h>
#include<stdlib.h>
/*函数原型声明*/
void fun(int, int);
int main()
{	
	int a,b;
 	a=10;
    b=15;
    /*输出主程序中的a,b值*/
    printf("主函数中:\na=%d,\tb=%d\n",a,b);	
    printf("a的地址:%p, b的地址:%p\n",&a,&b);
	/*调用函数*/
    fun(a,b);
    /*分隔用*/
	printf("-----------------------------------------\n");
 	/*输出调用函数后的a,b值*/
  	printf("调用函数后:\na=%d,\tb=%d\n",a,b);
  	printf("a的地址:%p, b的地址:%p\n",&a,&b);
  	system("pause");
 	return 0;	
}
void fun(int a, int b)
{
 	printf("-----------------------------------------\n");
    printf("fun 函数内:\na=%d, b=%d\n",a,b);
    printf("a的地址:%p, b的地址:%p\n",&a,&b);
	a=20;
	b=30;/*重设函数内的a,b值*/
	printf("函数内变更数值后:a=%d, b=%d\n",a,b);
}
