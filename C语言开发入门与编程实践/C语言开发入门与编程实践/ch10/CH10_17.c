#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int count=0;
    char filename[50];
    printf("输入文件名称:"); 
    gets(filename);
    
    if((fptr = fopen(filename, "r")) ==NULL)    /* 检查文件是否打开成功 */
        puts("无法打开文件");
    else
        while( !feof(fptr) ) /* 判断文件是否读取完毕 */
        {
         fgetc(fptr);/*一次读取一个字符,逐步将文本文件内容读出 */
         count++;/* 计算字节 */
         }
    printf("文件大小:%d 字节\n",count-1); 
    fclose(fptr);    /* 关闭文件 */

    system("pause");
    return 0;

}
