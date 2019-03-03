#include<stdio.h>
#include<stdlib.h>
/*引用时间函数的头文件*/
#include<time.h>
int mul(int,int);
int main()
{	
	register int i,j;/* 声明寄存器变量 */ 
	float sum;
	time_t start_time, end_time;/* 长整数时间数据类型  */ 

    /*测试循环开始与结束时间*/
  	printf("循环开始\n");
    start_time=time(NULL); 
    /* 记录开始时间 */ 
    for(i=1; i<=10000;i++)
    for(j=1;j<10000;j++)
	sum=sum+mul(i,j);/* 循环计算过程 */ 
	
    end_time=time(NULL);/* 记录结束时间 */ 
 	printf("循环结束\n");
	printf("循环的执行时间为%f\n\n",difftime(end_time,start_time));
     /* difftime 为时间差函数,可返回秒数 */ 
     system("pause");
     return 0;
}
int mul(int a,int b)
{
    return a*b;
}
