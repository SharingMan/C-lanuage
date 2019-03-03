#include<stdio.h>
double rec_factorial(int );
double factorial(int );
int main(void)
{	
	int n;
	printf("请输入要计算的阶乘数:");
	scanf("%d",&n);
	printf("递归函数:\n%d!=%.0lf\n",n,rec_factorial(n));
	printf("一般循环函数:\n%d!=%.0lf\n",n,factorial(n));
    system("pause");
    return 0;	
}
/*递归函数*/
double rec_factorial(int n)
{	
	if(n==1)
		return 1;/* 跳出反复执行过程中的缺口 */	
  	else  	
  		return n*rec_factorial(n-1);/* 反复执行的过程 */		

}
/*一般的循环函数*/
double factorial(int n)
{
	int i;
    double sum=1;
 	for(i=1; i<=n; i++)
  		sum*=i;/* 利用循环来计算阶乘值 */ 
    return sum;	
}
