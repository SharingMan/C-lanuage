#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main()
{
#ifdef TRUE /* 假如 TRUE已定义 */
    printf("TRUE已定义了，常量值为1\n");
#endif

#ifndef FALSE/* 假如 FALSE未定义 */
    printf("FALSE未定义，定义其等于常量0\n");
    #define FALSE 0
#endif
    printf("TRUE = %d  FALSE = %d\n",TRUE,FALSE);

    system("pause");
    return 0;
}
