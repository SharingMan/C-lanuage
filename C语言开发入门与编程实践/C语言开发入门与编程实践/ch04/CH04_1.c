#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* 变量声明 */ 
  int Chi,Eng;
  int Average;
  
  printf("请输入语文成绩:");
  scanf("%d",&Chi);
  printf("请输入英文成绩:");
  scanf("%d",&Eng);
  Average=(Chi+Eng)/2; /*计算两者平均成绩*/
  printf("平均成绩:%d\n",Average);
  
  system("pause");
  return 0;
}
