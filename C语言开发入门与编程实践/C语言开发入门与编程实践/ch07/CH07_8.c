#include<stdio.h>
#include<stdlib.h>

/*各数组函数原型的声明*/
void print_arr(int arr[][5],int,int);
int main()
{	
	/*声明并初始化二维成绩数组*/
	int score_arr[][5]={{78,69,83,90,75},{11,22,33,44,55}};
	print_arr(score_arr,2,5);
    
    system("pause");	
 	return 0;	
}

/*输出二维数组各元素的函数*/
void print_arr(int arr[][5],int r,int c)
{	/*第一维可省略,其它维数的注标都必须清楚定义长度 */
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);
       	printf("\n");
	}
}
