#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

int main()
{
	int i,j;
	int A[ROWS][COLS] = {{1,3,5},
						{7,9,11},
						{13,15,17}};/* ��ά��������� */ 
	int B[ROWS][COLS] = {{9,8,7},
						{6,5,4},
						{3,2,1}};/* ��ά��������� */
	int C[ROWS][COLS] = {0};
	printf("[����A�ĸ���Ԫ��]\n");  /*��ӡ������A������*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	printf("[����B�ĸ���Ԫ��]\n");	/*��ӡ������B������*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",B[i][j]);
		printf("\n");
	}
	for(i=0;i<ROWS;i++)
	for(j=0;j<COLS;j++)
	    C[i][j]=A[i][j]+B[i][j];/* ����C=����A+����B */
	
	printf("[��ʾ����A�;���B��ӵĽ��]\n");	/*��ӡ��A+B������*/
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
			printf("%d\t",C[i][j]);
		printf("\n");
	}
	
	system("pause");
	return 0;
}
