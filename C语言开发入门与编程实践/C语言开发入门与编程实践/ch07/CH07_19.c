#include<stdio.h>
#include<stdlib.h>

void kgtopound(double);/* 函数原型声明 */ 
int main()
{	
	double kg;
	extern double pound;
	/* 利用extern修饰词,可引用声明于函数下方的外部变量 */ 
	printf("公斤转英磅\n");
	printf("-----------------------------------\n");
    printf("一公斤=%f英磅\n",pound);
    printf("-----------------------------------\n");
	printf("请输入公斤数:");
 	
    scanf("%lf",&kg);
   	kgtopound(kg);
   	
   	system("pause");
 	return 0;	
}/*声明在函数外的外部变量*/
double pound=2.204634;
void kgtopound(double kg)
{
	printf("%.1lf公斤=%.3f英磅\n",kg,pound*kg);
	/* 此函数在外部变量pound的下方,因此可直接使用 */ 
}
