#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch, str[10];

    if ((fptr = fopen("temp.txt", "r")) == NULL)
        printf("文件打开失败！");
    else
    {
        
        printf("字符串读取:6个字符一笔\n");
        printf("------------------------------------\n");
        while( !feof(fptr) )
        {
            fgets(str,7, fptr);/* 每次读取6个字符 */ 
            printf("%7s\t", str);
            printf("        现在光标:%x\n", fptr->_ptr);/* 打印光标地址 */ 
        }
         printf("------------------------------------\n");
         rewind(fptr);/* 将文件读取光标返回fptr文件的开头 */
         printf("字符串读取:10个字符一笔\n");
         printf("------------------------------------\n");
         while( !feof(fptr) )
        {
            fgets(str, 11, fptr);
            printf("%11s\t", str);/* 每次读取10个字符 */
            printf("现在光标:%x\n", fptr->_ptr);/* 打印光标地址 */     
        }
        
    }
    
     fclose(fptr); 
       
     system("pause");
     return 0;
}
