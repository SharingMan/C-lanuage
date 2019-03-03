#include <stdio.h>
#include <stdlib.h>

void bubble (int *);   /*声明气泡排序函数*/
void showdata (int *); /*声明打印数组函数*/
int main()
{
	int data[6]={4,6,2,7,8,9};	  /*打印排序的原始数据*/
	printf("改良冒泡排序法\n原始数据为：");
	showdata (data);
	bubble (data);
	system("pause");
	return 0;
}
void showdata (int data[])     /*利用循环打印数据*/
{
	int i;
	for (i=0;i<6;i++)
		printf("%3d",data[i]);
	printf("\n");
}
void bubble (int data[])
{
	int i,j,tmp,flag;
	for(i=5;i>=0;i--)
	{
		flag=0;           /*flag用来判断是否有执行交换的动作*/
		for (j=0;j<i;j++)
		{
			if (data[j+1]>data[j])
			{
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
				flag++;    /*如果有执行过交换，则flag不为0*/
			}
		}
		if (flag==0)
			break;
		/*
		当执行完一次扫描就判断是否交换，如果没有交换过数据
		，表示此时数组已完成排序，故可直接跳出循环*/
		printf("第 %d 次排序：",6-i);
		for (j=0;j<6;j++)
			printf("%3d",data[j]);
		printf("\n");		    
	}
	printf("最后排序结果为：");
	showdata (data);
}
