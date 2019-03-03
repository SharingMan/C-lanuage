#include <stdio.h>
#include <stdlib.h>

char* Strcat(char*, char*);   /* 字符串串接函数原型声明 */

int main( void )
{
    char str1[80];
    char str2[80];

    printf( "请输入一英文字符串：" );
    scanf( "%s", str1 );
    printf( "请输入一串接字符串：" );
    scanf( "%s", str2 );
    printf( "字符串串接：%s\n", Strcat(str1, str2) );
    
    system("pause");
    return 0;
}

/* 自变量：str1与str2串接       */
/* 返回值：返回串接结果str1   */
char* Strcat(char* str1, char* str2)/* 返回值为字符串指针 */ 
{
    int i = 0;
    int j = 0;

    while ( *(str1+i) != '\0' )  /* 寻找str1的结束字符'\0'位置 */
        i++;
    while ( *(str2+j) != '\0' )
    {
        *(str1+i+j) = *(str2+j);/* str1字符串开始逐字符串接 */ 
        j++;
    }

    *(str1+i+j) = '\0';    /* 记得加上空字符 */

    return str1;
}
