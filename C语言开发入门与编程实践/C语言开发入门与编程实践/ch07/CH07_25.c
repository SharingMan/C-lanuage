#include <stdio.h>
#include <stdlib.h>

void bubble (int *);   /*��������������*/
void showdata (int *); /*������ӡ���麯��*/
int main()
{
	int data[6]={4,6,2,7,8,9};	  /*��ӡ�����ԭʼ����*/
	printf("����ð������\nԭʼ����Ϊ��");
	showdata (data);
	bubble (data);
	system("pause");
	return 0;
}
void showdata (int data[])     /*����ѭ����ӡ����*/
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
		flag=0;           /*flag�����ж��Ƿ���ִ�н����Ķ���*/
		for (j=0;j<i;j++)
		{
			if (data[j+1]>data[j])
			{
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
				flag++;    /*�����ִ�й���������flag��Ϊ0*/
			}
		}
		if (flag==0)
			break;
		/*
		��ִ����һ��ɨ����ж��Ƿ񽻻������û�н���������
		����ʾ��ʱ������������򣬹ʿ�ֱ������ѭ��*/
		printf("�� %d ������",6-i);
		for (j=0;j<6;j++)
			printf("%3d",data[j]);
		printf("\n");		    
	}
	printf("���������Ϊ��");
	showdata (data);
}
