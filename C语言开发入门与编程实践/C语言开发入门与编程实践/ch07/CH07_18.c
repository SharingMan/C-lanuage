#include<stdio.h>
#include<stdlib.h>

int sum(int);
int sum1(int);/* ����ԭ������ */ 
int main()
{	
	int n;
	
	printf("��һ�ε���\n"); 
 	printf("һ���������:%d\t",sum(5));
  	printf("��̬��������:%d\n\n",sum1(5));
	printf("�ڶ��ε���\n"); 
    printf("һ���������:%d\t",sum(10));
  	printf("��̬��������:%d\n\n",sum1(10));
  	printf("�����ε���\n"); 
 	printf("һ���������:%d\t",sum(15));
  	printf("��̬��������:%d\n",sum1(15));
    
    system("pause");
    return 0;	
}
/*һ��ı�������*/
int sum(int n)
{ 
	int sum=0; /* ��ʼֵ�趨Ϊ0 */
	sum+=n;
	return sum;
}
/*��̬�����ĺ���*/
int sum1(int n)
{
	/*������̬����sum*/
	static int sum;
	sum+=n;
 	return sum;
}
