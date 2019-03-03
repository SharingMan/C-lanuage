#include <stdio.h>
#include <stdlib.h>

void toUpper(char*);  /* 字符串转大写 */

int main()
{
    char str[80];

    printf( "请输入一个英文字符串：" );
    scanf( "%s", str );
    toUpper(str);
    printf( "字符串转大写： %s\n", str );
    
    system("pause");
    return 0;
}

/* 自变量：传递字符串   */
/* 结果：小写转大写 */
void toUpper( char *str )
{
    int i = 0;
    int length;

    while ( str[i] != '\0' )
        i++;/* 计算长度 */ 
    length = i;

    for( i = 0; i < length; i++ )
        if ( *(str+i) > 96 && *(str+i) < 123 )
            *(str+i) = *(str+i) - 32;/* 转换为字符串转大写 */ 
 }

/* 自变量：传递字符串 */
/* 结果：大写转小写 */
