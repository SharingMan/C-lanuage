#include <stdio.h>
#include <stdlib.h>

int main()
{
      int i,sum=0;

	  for (i=1;i<=10;i++)            /*����forѭ��*/
      {
          sum+=i;                    /*sum=sum+i*/
      } 
      printf("sum=%d\n", sum);  /*��ӡ��sum��ֵ*/
      
      system("pause");
      return 0;
}
