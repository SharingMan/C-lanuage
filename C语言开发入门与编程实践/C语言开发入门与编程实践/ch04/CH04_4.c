#include<stdio.h>
#include<stdlib.h>

int main()
{
  int number;
  /* �ж�����Ϊż�������� */ 
  printf("����������: ");
  scanf("%d", &number);/*��������*/
  
  /* ������������ʹ�� */
  (number%2==0)?printf("��������Ϊż��\n"):printf("��������Ϊ����\n");
    
  system("pause");
  return 0;
}
