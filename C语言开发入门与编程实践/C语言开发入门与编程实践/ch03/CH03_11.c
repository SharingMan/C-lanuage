#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[30]; /* 声明字符串数组 */ 
    printf("请输入一个字符串：\n",c);       
    gets(c); /* 输入一个字符串 */   
    puts(c); /* 输出一个字符串 */  
    system("pause");  
    return 0; 
}
