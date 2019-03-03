#include<stdio.h>
#include<stdlib.h>

int main()
{
  int number;
  int i,j;
  
  printf("请输入九九表中不要打印出来的数字项目: ");
  scanf("%d", &number);
  /*九九表的双重循环*/ 
  
  for(i=1; i<=9; i++)
  {
    for(j=1; j<=9; j++)
    {
       if(j==number)   continue;/*设定继续的条件*/ 
       printf("%d*%d=",j,i);
       printf("%d\t ",i*j);
    }
    printf("\n");
  }
  system("pause");
  return 0;
}
