#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,n,i=0;
    printf("������nֵ��"); 
	scanf("%d",&n);
	
   /* do while����ʽ*/
    do {
		sum+=i;          
		printf("n=%d\tsum=%d\n", i, sum);    /*��ӡ��i��sum��ֵ*/
		i++;
	}while(n<=10 && i<=n) ; /* �ж�ѭ���������� */ 
	
    system("pause"); 
    return 0;             
}
