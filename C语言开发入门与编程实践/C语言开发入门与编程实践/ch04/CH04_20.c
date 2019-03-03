#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, ans = 1;

    printf("请输入n值：");
    scanf("%d", &n);
    while (i <= n)
       {
       ans*= i;/* for循环来计算n!的值 */ 
       i++;
       }
    printf("%d! = %d\n", n,ans);
    system("pause");
    return 0;
}
