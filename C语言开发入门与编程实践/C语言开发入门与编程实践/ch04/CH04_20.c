#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, ans = 1;

    printf("������nֵ��");
    scanf("%d", &n);
    while (i <= n)
       {
       ans*= i;/* forѭ��������n!��ֵ */ 
       i++;
       }
    printf("%d! = %d\n", n,ans);
    system("pause");
    return 0;
}
