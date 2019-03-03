#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arrA,*arrB;
	int M,N,row,col;
	printf("[输入MxN矩阵的维度]\n");
	printf("请输入维度M: ");
	scanf("%d",&M);
	printf("请输入维度N: ");
	scanf("%d",&N);
	arrA = (int*)malloc(M*N*sizeof(int));/* 动态配置数组 */ 
	arrB = (int*)malloc(M*N*sizeof(int));
	printf("[请输入矩阵内容]\n");
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			printf("a%d%d=",row,col);
			scanf("%d",&arrA[(row-1)*N+(col-1)]);
		}
	}
	printf("[输入矩阵内容为]\n");
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			printf("%d\t",arrA[(row-1)*N+(col-1)]);
		}
		printf("\n");
	}
	/*进行矩阵转置的动作*/
	for(row=1;row<=N;row++)
		for(col=1;col<=M;col++)
			arrB[(col-1)*N+(row-1)]=arrA[(row-1)+(col-1)*N];

	printf("[转置矩阵内容为]\n");
	for(row=1;row<=N;row++)
	{
		for(col=1;col<=M;col++)
		{
			printf("%d\t",arrB[(col-1)*N+(row-1)]);
		}
		printf("\n");/* 打印转置矩阵内容 */ 
	}
	system("pause");
    return 0;
} 
