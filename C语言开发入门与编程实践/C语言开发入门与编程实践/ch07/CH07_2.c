#include<stdio.h>
#include<stdlib.h>

int my_pow(int,int);
/*声明函数原型*/
int main()
{
  int x,r;
  printf("请输入两个数字: \n");
  /*输入数字*/
  printf("x=");
  scanf("%d",&x);
  printf("r=");
  scanf("%d",&r);
  /*在程序叙述中调用函数*/
  printf("%d的%d次方=%d\n",x,r,my_pow(x,r));/* 调用my_pow()函数 */
  system("pause");
  return 0;
}
/*函数定义部分*/
int my_pow(int x,int r)
{   int i;
	int sum=1;
	for(i=0;i<r;i++)
 	{
 		sum=sum*x;
    } /* 计算x^r的值 */ 
    return sum; 
}
