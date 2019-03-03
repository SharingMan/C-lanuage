#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])/* 命令行自变量传递声明 */ 
{
    int i;
    if( argc == 1 )/* 只有程序名称 */ 
        printf( "未指定参数！" );
    else
    {
        printf("所输入的参数为：\n");
        for( i = 0; i < argc; i++ )
            puts(argv[i]);/* 打印 argv数组的内容 */ 
    }
    system("pause");
    return 0;
}
