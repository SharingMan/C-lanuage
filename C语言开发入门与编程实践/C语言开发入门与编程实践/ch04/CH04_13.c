#include<stdio.h>
#include<stdlib.h>

int main()
{
  int number;
  int i,j;
  printf("��������,��ӡ������֮ǰ�ľžű���Ŀ:");
  scanf("%d", &number); 
  /*�žű��˫��ѭ��*/
  for(i=1; i<=9; i++)
  {
    for(j=1; j<=9; j++)
    {
       if(j>=number)   
            break;/*�趨����������*/ 
       printf("%d*%d=",j,i);
       printf("%d\t ",i*j);
    }
    printf("\n");
  }
  system("pause");
  return 0;
}
