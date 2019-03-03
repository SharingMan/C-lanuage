#include <stdio.h>
#include <stdlib.h>
#define INT_SCANF(x) scanf("%d", &x) /* 输入整数的scanf宏定义 */ 
#define FLT_SCANF(x) scanf("%f", &x)/* 输入实数的scanf宏定义 */

int main(void)
{
    int x;
    float y;

    printf("请输入整数x：");
    INT_SCANF(x);
    printf("请输入实数y：");
    FLT_SCANF(y);
    printf("整数x = %d\n", x);
    printf("实数y = %.2f\n", y);
    
    system("pause");
    return 0;
}
