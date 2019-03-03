#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1,n;
    printf("请输入一个数字：");
    scanf("%d", &n);
    printf("%d的所有因子为",n);
   
    while(a<=n)                      /*定义while循环*/
    {
       if(n%a==0)                    /*当n能够被a整除时~则a就是n的因子*/ 
       {                             /*则执行if内的语句*/
         printf("%d ",a);    
		  if(n!=a)printf(",");
       }
       a++;                          /*a值递增1*/
    }
    
    printf("\n");
    system("pause");
    return 0;
}
