#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    if((fptr = fopen("test.txt", "r")) ==NULL)    /* 检查文件是否打开成功 */
        puts("无法打开文件");
    else
        while( !feof(fptr) ) /* 判断文件是否读取完毕 */
        printf("%c", fgetc(fptr));/*一次读取一个字符,逐步将文本文件内容读出 */
    
    fclose(fptr);    /* 关闭文件 */
    printf("\n");
    system("pause");
    return 0;

}
