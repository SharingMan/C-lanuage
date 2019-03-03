#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,n,i=0;
    printf("请输入n值："); 
	scanf("%d",&n);
	
   /* do while条件式*/
    do {
		sum+=i;          
		printf("n=%d\tsum=%d\n", i, sum);    /*打印出i和sum的值*/
		i++;
	}while(n<=10 && i<=n) ; /* 判断循环结束条件 */ 
	
    system("pause"); 
    return 0;             
}
