#include<stdio.h>
#include"CH08_1_1.c"  /* �������ļ� */
double factorial(int );/* ����ԭ������ */
double Cnk(int ,int);/* ����ԭ������ */ 
/*�����򲿷�*/
int main(void)
{	
	int n,k;
	printf("����C(n,k)=n!/(k!(n-k)!)\n");
	printf("-------------------------------------\n");
	printf("������n=");
	scanf("%d",&n);
 	printf("������k=");
	scanf("%d",&k);	
 	printf("%d!/(%d!(%d-%d)!)=%.f\n",n,k,n,k,Cnk(n,k));/* ��ӡ����� */ 
	
    system("pause");
    return 0;	
}
