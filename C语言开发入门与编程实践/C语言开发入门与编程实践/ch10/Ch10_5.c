#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr,*fptr1;
    char str[31];
    
    fptr = fopen("巴冷公主.txt", "r");
    fptr1=fopen("巴冷复制文件.txt","w");
    
    if(fptr ==NULL|| fptr1==NULL)    /* 检查文件是否打开成功 */
        puts("无法打开文件");
    else
        while( !feof(fptr) )/* 判断文件是否读取完毕 */
        {
            fgets(str, 31, fptr);    /* str[31]是用来保存'\0' */
            printf("%s\n", str);
            fputs(str,fptr1); /* 将str字符串写入到fptr1文件中 */ 
            
        }

    fclose(fptr);    /* 关闭文件 */
    fclose(fptr1); 
    
    system("pause");
    return 0;

}
