#include<stdio.h>
#include<stdlib.h>
/*����ʱ�亯����ͷ�ļ�*/
#include<time.h>
int mul(int,int);
int main()
{	
	register int i,j;/* �����Ĵ������� */ 
	float sum;
	time_t start_time, end_time;/* ������ʱ����������  */ 

    /*����ѭ����ʼ�����ʱ��*/
  	printf("ѭ����ʼ\n");
    start_time=time(NULL); 
    /* ��¼��ʼʱ�� */ 
    for(i=1; i<=10000;i++)
    for(j=1;j<10000;j++)
	sum=sum+mul(i,j);/* ѭ��������� */ 
	
    end_time=time(NULL);/* ��¼����ʱ�� */ 
 	printf("ѭ������\n");
	printf("ѭ����ִ��ʱ��Ϊ%f\n\n",difftime(end_time,start_time));
     /* difftime Ϊʱ����,�ɷ������� */ 
     system("pause");
     return 0;
}
int mul(int a,int b)
{
    return a*b;
}
