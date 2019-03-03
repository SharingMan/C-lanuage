#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a;
  int b=12;
  printf("变量a=%d \n", a); /*打印出未初始化的a值*/
  printf("变量b= %d \n", b); /*打印出已初始化的b值*/
  system("pause");
  return 0;
}
