#include<stdio.h>
#include<stdlib.h>

/*�����麯��ԭ�͵�����*/
void print_arr(int arr[][5],int,int);
int main()
{	
	/*��������ʼ����ά�ɼ�����*/
	int score_arr[][5]={{78,69,83,90,75},{11,22,33,44,55}};
	print_arr(score_arr,2,5);
    
    system("pause");	
 	return 0;	
}

/*�����ά�����Ԫ�صĺ���*/
void print_arr(int arr[][5],int r,int c)
{	/*��һά��ʡ��,����ά����ע�궼����������峤�� */
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);
       	printf("\n");
	}
}
