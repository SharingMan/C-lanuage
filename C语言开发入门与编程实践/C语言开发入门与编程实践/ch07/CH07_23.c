#include<stdio.h>
double rec_factorial(int );
double factorial(int );
int main(void)
{	
	int n;
	printf("������Ҫ����Ľ׳���:");
	scanf("%d",&n);
	printf("�ݹ麯��:\n%d!=%.0lf\n",n,rec_factorial(n));
	printf("һ��ѭ������:\n%d!=%.0lf\n",n,factorial(n));
    system("pause");
    return 0;	
}
/*�ݹ麯��*/
double rec_factorial(int n)
{	
	if(n==1)
		return 1;/* ��������ִ�й����е�ȱ�� */	
  	else  	
  		return n*rec_factorial(n-1);/* ����ִ�еĹ��� */		

}
/*һ���ѭ������*/
double factorial(int n)
{
	int i;
    double sum=1;
 	for(i=1; i<=n; i++)
  		sum*=i;/* ����ѭ��������׳�ֵ */ 
    return sum;	
}
