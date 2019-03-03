#include <stdio.h>
#include <stdlib.h>

int main()
{
      int i,sum=0;

	  for (i=1;i<=10;i++)            /*定义for循环*/
      {
          sum+=i;                    /*sum=sum+i*/
      } 
      printf("sum=%d\n", sum);  /*打印出sum的值*/
      
      system("pause");
      return 0;
}
