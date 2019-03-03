#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,total;
  printf("停车超过一小时,每小时收费50元\n");
  printf("请输入停车几小时: ");
  scanf("%d",&t);	/*输入小时数*/     
  if(t>1)
  {
    total=t*50;	/*计算费用*/
    printf("总额为:%d元\n",total);    
  }
  system("pause");
  return 0; 
}
