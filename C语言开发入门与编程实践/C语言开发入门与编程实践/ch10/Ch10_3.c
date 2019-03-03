#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[20],ch;

    printf("请输入文件名称：");
    scanf("%s", filename);

    if((fptr = fopen(filename, "w")) == NULL)
        printf("文件打开失败！");
    else
    {
        while ((ch=getche())!='\r')    /* 如果输入不为Enter键，则继续循环 */
            fputc(ch, fptr);/* 将字符写入文件 */ 
    }

    fclose(fptr);    /* 关闭文件 */
    printf("\n");
    system("pause");
    return 0;
}
