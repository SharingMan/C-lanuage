#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* �������� */ 
  int Chi,Eng;
  int Average;
  
  printf("���������ĳɼ�:");
  scanf("%d",&Chi);
  printf("������Ӣ�ĳɼ�:");
  scanf("%d",&Eng);
  Average=(Chi+Eng)/2; /*��������ƽ���ɼ�*/
  printf("ƽ���ɼ�:%d\n",Average);
  
  system("pause");
  return 0;
}
