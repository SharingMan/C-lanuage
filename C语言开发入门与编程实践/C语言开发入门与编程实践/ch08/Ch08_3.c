#include <stdio.h>
#include <stdlib.h>

#define NEWLINE putchar('\n')
#define COPYRIGHT owner()

void owner(void);    /* 输出拥有者信息的函数 */

int main(void)
{
    COPYRIGHT;/* 调用宏 */ 
    NEWLINE;/* 调用宏 */
    COPYRIGHT;/* 调用宏 */

    system("pause");
    return 0;
}

void owner(void)
{
    printf("函数名称也可以宏定义\n");
    printf("版权所有人：Michael\n");
    printf("日期：2007/01/01\n");
}
