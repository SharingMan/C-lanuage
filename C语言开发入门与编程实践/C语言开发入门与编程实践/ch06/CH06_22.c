#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arrA,*arrB;
	int M,N,row,col;
	printf("[����MxN�����ά��]\n");
	printf("������ά��M: ");
	scanf("%d",&M);
	printf("������ά��N: ");
	scanf("%d",&N);
	arrA = (int*)malloc(M*N*sizeof(int));/* ��̬�������� */ 
	arrB = (int*)malloc(M*N*sizeof(int));
	printf("[�������������]\n");
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			printf("a%d%d=",row,col);
			scanf("%d",&arrA[(row-1)*N+(col-1)]);
		}
	}
	printf("[�����������Ϊ]\n");
	for(row=1;row<=M;row++)
	{
		for(col=1;col<=N;col++)
		{
			printf("%d\t",arrA[(row-1)*N+(col-1)]);
		}
		printf("\n");
	}
	/*���о���ת�õĶ���*/
	for(row=1;row<=N;row++)
		for(col=1;col<=M;col++)
			arrB[(col-1)*N+(row-1)]=arrA[(row-1)+(col-1)*N];

	printf("[ת�þ�������Ϊ]\n");
	for(row=1;row<=N;row++)
	{
		for(col=1;col<=M;col++)
		{
			printf("%d\t",arrB[(col-1)*N+(row-1)]);
		}
		printf("\n");/* ��ӡת�þ������� */ 
	}
	system("pause");
    return 0;
} 
