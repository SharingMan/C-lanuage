#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[31];
    
    if((fptr = fopen("巴冷公主.txt", "r")) ==NULL)    /* 检查文件是否打开成功 */
        puts("无法打开文件");
    else
        while( !feof(fptr) )/* 判断文件是否读取完毕 */
        {
            fgets(str, 31, fptr);    /* str[31]是用来保存'\0' */
            printf("%s\n", str);  
        }

    fclose(fptr);    /* 关闭文件 */
     
    system("pause");
    return 0;

}
