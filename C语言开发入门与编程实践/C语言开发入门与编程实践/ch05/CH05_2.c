#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score[10]={64,84,91,100,58,71,66,43,67,84};  /* 声明并初始化数组*/
	int degree[10]={0};                              /* 声明并初始化数组*/
	int i,j,sum=0;
	double avg=0.0;

	/* 利用循环计算总分，并递增对应的分数段人数 */
	for (i=0; i<10; i++)
	{
		sum += score[i];            /* 计算总分 */
		if (score[i]/10 == 10)
			degree[9]++;            /* 成绩为100，则将索引值9的元素加1*/
		else
			degree[score[i]/10]++;  /* 递增对应的分数段人数 */
	}
	avg = (double)sum /(double)10;/* 计算平均*/ 

	printf("总分=%d ,平均=%f\n",sum,avg);
	printf("人数分布图如下：\n");
	printf("分数段\t人数\n");
	for (i=0; i<10; i++)
	{
		printf("%d ~ %d \t",i*10,i*10+9 ); /* 设定分数段的输出文字*/
		for (j=0;j<degree[i];j++)
			printf("*");                /* 以星号代表该分数段的人数 */
		printf("\n");
	}
 
   system("pause");
   return 0;
}
