#include<stdio.h>
#include<stdlib.h>

int main()
{
  int number;
  /* 判断数字为偶数或奇数 */ 
  printf("请输入数字: ");
  scanf("%d", &number);/*输入数字*/
  
  /* 条件操作符的使用 */
  (number%2==0)?printf("输入数字为偶数\n"):printf("输入数字为奇数\n");
    
  system("pause");
  return 0;
}
