#include<stdio.h>
#include<stdlib.h>

int my_pow(int,int);
/*��������ԭ��*/
int main()
{
  int x,r;
  printf("��������������: \n");
  /*��������*/
  printf("x=");
  scanf("%d",&x);
  printf("r=");
  scanf("%d",&r);
  /*�ڳ��������е��ú���*/
  printf("%d��%d�η�=%d\n",x,r,my_pow(x,r));/* ����my_pow()���� */
  system("pause");
  return 0;
}
/*�������岿��*/
int my_pow(int x,int r)
{   int i;
	int sum=1;
	for(i=0;i<r;i++)
 	{
 		sum=sum*x;
    } /* ����x^r��ֵ */ 
    return sum; 
}
