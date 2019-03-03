#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c1,c2;
    printf("请按任一键结束!");       
    c1=getche();  /* 会将所输入的字符显示在屏幕上*/ 
    putchar('\n');
    printf("请再按任一键结束!");
    c2=getch();  /* 不会将所输入的字符显示在屏幕上*/ 
    putchar('\n'); 
    printf("getche()读取的字符:%c\n", c1);          
    printf("getch ()读取的字符:%c\n", c2);
    
    system("pause");  
    return 0;
}
