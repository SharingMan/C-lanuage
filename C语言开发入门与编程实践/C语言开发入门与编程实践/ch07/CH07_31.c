#include <stdio.h>
#include <stdlib.h>

char* strcopy(char*, char*);   /* 字符串复制函数声明 */

int main( )
{
    char strscr[80];
    char strdes[80];

    printf( "请输入一个英文字符串：" );
    scanf( "%s", strscr );
    strcopy(strdes, strscr);
    printf( "字符串复制：%s\n", strdes );
    
    system("pause");
    return 0;
}

/* 自变量：strscr来源字符串        */
/*       strdes目的字符串        */
/* 返回值：字符串复制结果strdes  */
char* strcopy(char* strdes, char * strscr)
{
    int i = 0;

    while ( *(strscr+i) != '\0' )
    {
        *(strdes+i) = *(strscr+i);
        i++;
    }

    *(strdes+i) = '\0'; /* 字符串的每个字符复制完毕后,记得加上空字符 */
    return strdes;
}
