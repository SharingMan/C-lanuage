#include <stdio.h>
#include <fcntl.h> /* 打开模式常量所定义的头文件 */ 
#include <sys\stat.h> /* O_CREAT常量所定义的头文件 */
#include <io.h> /* 无缓冲区文件存取函数所定义的头文件 */ 
#include <string.h>
#include <stdlib.h>

int main()
{
    char buffer[256];   /* 自行设置缓冲区,一次可读取256个字节 */
    int fhdl;

    printf("请输入一个字符串：");
    gets(buffer);

    /* 文件写入 */
    if( (fhdl = open("lowio.txt", O_WRONLY)) == -1)
            printf("文件打开失败！");
    else
    {
        write(fhdl, buffer, sizeof(buffer)); /* 在fhd1文件,每次写入256个字节 */
        close(fhdl);
    }

    /* 文件读取 */
    if( (fhdl = open("lowio.txt", O_RDONLY | O_TEXT)) == -1)
            printf("文件打开失败！");
    else
    {
        read(fhdl, buffer, sizeof(buffer));/* 从fhd1文件,每次读取256个字节 */ 
        printf("读出字符串：");
        puts(buffer);
        close(fhdl); /* 关闭文件 */ 
    }
    system("pause");
    return 0;
}
