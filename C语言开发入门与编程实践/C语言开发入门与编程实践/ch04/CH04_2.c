#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,total;
  printf("ͣ������һСʱ,ÿСʱ�շ�50Ԫ\n");
  printf("������ͣ����Сʱ: ");
  scanf("%d",&t);	/*����Сʱ��*/     
  if(t>1)
  {
    total=t*50;	/*�������*/
    printf("�ܶ�Ϊ:%dԪ\n",total);    
  }
  system("pause");
  return 0; 
}
