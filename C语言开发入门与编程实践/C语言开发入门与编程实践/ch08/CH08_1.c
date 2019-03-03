#include<stdio.h>
#include"CH08_1_1.c"  /* 包含此文件 */
double factorial(int );/* 函数原型声明 */
double Cnk(int ,int);/* 函数原型声明 */ 
/*主程序部分*/
int main(void)
{	
	int n,k;
	printf("计算C(n,k)=n!/(k!(n-k)!)\n");
	printf("-------------------------------------\n");
	printf("请输入n=");
	scanf("%d",&n);
 	printf("请输入k=");
	scanf("%d",&k);	
 	printf("%d!/(%d!(%d-%d)!)=%.f\n",n,k,n,k,Cnk(n,k));/* 打印出结果 */ 
	
    system("pause");
    return 0;	
}
