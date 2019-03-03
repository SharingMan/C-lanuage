#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

int main()
{
	int i,j;
	int A[ROWS][COLS] = {{1,3,5},
						{7,9,11},
						{13,15,17}};/* 二维数组的声明 */ 
	int B[ROWS][COLS] = {{9,8,7},
						{6,5,4},
						{3,2,1}};/* 二维数组的声明 */
	int C[ROWS][COLS] = {0};
	printf("[矩阵A的各个元素]\n");  /*打印出矩阵A的内容*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	printf("[矩阵B的各个元素]\n");	/*打印出矩阵B的内容*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",B[i][j]);
		printf("\n");
	}
	for(i=0;i<ROWS;i++)
	for(j=0;j<COLS;j++)
	    C[i][j]=A[i][j]+B[i][j];/* 矩阵C=矩阵A+矩阵B */
	
	printf("[显示矩阵A和矩阵B相加的结果]\n");	/*打印出A+B的内容*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",C[i][j]);
		printf("\n");
	}
	
	system("pause");
	return 0;
}
