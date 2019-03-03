#include <stdio.h>
#include <stdlib.h>

void setX20(void);  /* 设定全局域变量的值为 20 */
void setX30(void);  /* 设定全局域变量的值为 30 */
int x=10;/* 声明 x 为全局域变量 */

int main(void)
{
    
    printf( "x = %d\n", x );
    setX20();
    printf( "x = %d\n", x );
    setX30();
    printf( "x = %d\n", x );
    
    system("pause");
    return 0;
}
void setX20(void)
{
    x = 20;
}

void setX30(void)
{
    x = 30;
}
