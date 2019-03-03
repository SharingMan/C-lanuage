/*换行符输出练习*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf( "\"\x48\x45\x4c\x4c\x4f\x21" );      /*以16进制表示法显示"HELLO!字符*/
    printf( "\127\117\122\114\104\41\"\n" );    /*以8进制表示法显示WORLD!"字符
    ，最后将游标换行*/
    
    system("pause");
    return 0;
}
