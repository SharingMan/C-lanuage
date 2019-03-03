#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char c,c1[20];
    printf("请由键盘输入数据,输入后请按Enter键：");  
    c=getchar();/* 从键盘读取一个字符,并按下Enter键 */ 
    printf("您所输入的字符为：");  
    scanf("%s",c1); /* scanf() 函数读取在缓冲区的字符 */         
    putchar(c);
    printf("\n%s\n",c1);
    putchar('\n');/* 以putchar函数输出换行字符*/ 
    
    system("pause");    
    return 0; 
}
