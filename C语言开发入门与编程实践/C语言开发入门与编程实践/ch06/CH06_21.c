#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int *A,*B,*C;
	int M,N,P;
	int i,j,k,Temp;
	printf("���������A��ά��(M,N): \n");
	printf("M= ");
	scanf("%d",&M);
	printf("N= ");
	scanf("%d",&N);
	A = (int*)malloc(M*N*sizeof(int));/* ��̬����һά���� */ 
	printf("[���������A�ĸ���Ԫ��]\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
            printf("a%d%d=",i,j);
			scanf("%d",&A[i*N+j]);
      }
	printf("���������B��ά��(N,P): ");
	printf("\nN= ");
	scanf("%d",&N);
	printf("P= ");
	scanf("%d",&P);
	B = (int*)malloc(N*P*sizeof(int));/* ��̬����һά���� */ 
	printf("[���������B�ĸ���Ԫ��]\n");
	for(i=0;i<N;i++)
		for(j=0;j<P;j++)
		{
            printf("b%d%d=",i,j);
			scanf("%d",&B[i*P+j]);
        }
	C = (int*)malloc(M*P*sizeof(int));/* ��̬����һά���� */  
	if(M<=0||N<=0||P<=0)
	{
		printf("[����:ά��M,N,P�������0]\n");
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
	printf("[AxB�Ľ����]\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
			printf("%d\t",C[i*P+j]);/* ��ӡ��C�������� */ 
		printf("\n");
	}
	system("pause");
	return  0;
}
