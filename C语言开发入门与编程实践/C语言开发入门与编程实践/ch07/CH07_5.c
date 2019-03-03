#include<stdio.h>
#include<stdlib.h>
/*加上指针操作符的函数原型声明,这和传值调用不同*/
void fun(int*, int*);
int main()
{	
	int a,b;
 	a=10;
    b=15;
    printf("主函数中:\na=%d,\tb=%d\n",a,b);
    printf("a的地址:%p, b的地址:%p\n",&a,&b);	
	fun(&a,&b);/*自变量需加上&取址操作符,这和传值调用不同*/
	printf("-----------------------------------------\n");
	printf("调用函数后: \na=%d,\tb=%d\n",a,b);
	printf("a的地址:%p, b的地址:%p\n",&a,&b);
	system("pause");
    return 0;	
}
/*加上指针操作符的函数定义声明,这和传值调用不同*/
void fun(int *a, int *b)
{
	printf("-----------------------------------------\n");
 	/*此时的*a与*b代表的是传递过来地址上的数值,a与b则代表地址*/
	printf("函数内:a=%d,\tb=%d\n",*a,*b);
	/*输出函数内a与b的地址*/
	printf("a的地址:%p, b的地址:%p\n",a,b);
	*a=20;
	*b=30;	
	printf("函数内变更数值后:a=%d, b=%d\n",*a,*b);
	printf("a的地址:%p, b的地址:%p\n",a,b);
}
