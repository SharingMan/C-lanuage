#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score[10]={64,84,91,100,58,71,66,43,67,84};  /* ��������ʼ������*/
	int degree[10]={0};                              /* ��������ʼ������*/
	int i,j,sum=0;
	double avg=0.0;

	/* ����ѭ�������ܷ֣���������Ӧ�ķ��������� */
	for (i=0; i<10; i++)
	{
		sum += score[i];            /* �����ܷ� */
		if (score[i]/10 == 10)
			degree[9]++;            /* �ɼ�Ϊ100��������ֵ9��Ԫ�ؼ�1*/
		else
			degree[score[i]/10]++;  /* ������Ӧ�ķ��������� */
	}
	avg = (double)sum /(double)10;/* ����ƽ��*/ 

	printf("�ܷ�=%d ,ƽ��=%f\n",sum,avg);
	printf("�����ֲ�ͼ���£�\n");
	printf("������\t����\n");
	for (i=0; i<10; i++)
	{
		printf("%d ~ %d \t",i*10,i*10+9 ); /* �趨�����ε��������*/
		for (j=0;j<degree[i];j++)
			printf("*");                /* ���ǺŴ���÷����ε����� */
		printf("\n");
	}
 
   system("pause");
   return 0;
}
