#include <stdio.h>
#include <stdlib.h>
#define SIZE 6  /*���������С*/
        
void inser (int *);     /*�����������򷨺���*/
void showdata (int *);  /*������ӡ���麯��*/
void inputarr (int *,int);  /*�����������麯��*/
int main(void)
{ 
	int data[SIZE];
	printf("������6��׼���������ֵ:\n");
    printf("--------------------------------------------------------------\n"); 
	inputarr(data,SIZE);     /*���������������С��������*/
	printf("--------------------------------------------------------------\n");
    printf("�������ԭʼ������:");
    showdata (data);
    printf("-------------------------------------------------------------\n");
	inser(data);
	system("pause");
	return 0;
}

void inputarr(int data[],int size)
{
	int i;
	for (i=0;i<size;i++)      /*����ѭ��������������*/
	{ 
		printf("������� %d ��Ԫ�أ�",i+1);
		scanf("%d",&data[i]);
	}
}
void showdata(int data[])
{  
	int i;
	for (i=0;i<SIZE;i++)
		printf("%d\t",data[i]);   /*��ӡ��������*/
	printf("\n");
}
void inser(int data[])
{  
	int i;     /*iΪɨ�����*/
	int j;     /*��j����λ�Ƚϵ�Ԫ��*/
	int tmp;   /*tmp�����ݴ�����*/
	for (i=1;i<SIZE;i++)  /*ɨ��ѭ������ΪSIZE-1*/
	{  
		tmp=data[i];
        j=i-1;
	    while (j>=0 && tmp<data[j])  /*����ڶ�Ԫ��С�ڵ�һԪ��*/
		{							 
			data[j+1]=data[j];		/*�Ͱ�����Ԫ��������һ��λ��*/		
			j--;
		}
		data[j+1]=tmp;              /*��С��Ԫ�طŵ���һλ*/	
		printf("�� %d ��ɨ�飺\t",i);
		showdata(data);
	}
}
