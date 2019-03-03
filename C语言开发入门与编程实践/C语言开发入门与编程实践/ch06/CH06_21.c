#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int *A,*B,*C;
	int M,N,P;
	int i,j,k,Temp;
	printf("请输入矩阵A的维数(M,N): \n");
	printf("M= ");
	scanf("%d",&M);
	printf("N= ");
	scanf("%d",&N);
	A = (int*)malloc(M*N*sizeof(int));/* 动态配置一维数组 */ 
	printf("[请输入矩阵A的各个元素]\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
            printf("a%d%d=",i,j);
			scanf("%d",&A[i*N+j]);
      }
	printf("请输入矩阵B的维数(N,P): ");
	printf("\nN= ");
	scanf("%d",&N);
	printf("P= ");
	scanf("%d",&P);
	B = (int*)malloc(N*P*sizeof(int));/* 动态配置一维数组 */ 
	printf("[请输入矩阵B的各个元素]\n");
	for(i=0;i<N;i++)
		for(j=0;j<P;j++)
		{
            printf("b%d%d=",i,j);
			scanf("%d",&B[i*P+j]);
        }
	C = (int*)malloc(M*P*sizeof(int));/* 动态配置一维数组 */  
	if(M<=0||N<=0||P<=0)
	{
		printf("[错误:维数M,N,P必须大于0]\n");
		return;
	}
	for(i=0;i<M;i++)
		for(j=0;j<P;j++)
		{
			Temp = 0;
			for(k=0;k<N;k++)
				Temp = Temp + A[i*N+k]*B[k*P+j];
			C[i*P+j] = Temp;
		}
	printf("[AxB的结果是]\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
			printf("%d\t",C[i*P+j]);/* 打印出C矩阵内容 */ 
		printf("\n");
	}
	system("pause");
	return  0;
}
