#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Val=123;
    float Val1=1.2345678;
    
    /* 整数格式化字符输出示范 */
    printf("----- 整数格式化字符输出示范----\n"); 
    printf("%%d的输出,Val=%d\n",Val);
    printf("%%i的输出,Val=%i\n",Val);
    printf("%%o的输出,Val=%o\n",Val);
    printf("%%u的输出,Val=%u\n",Val);
    printf("%%x的输出,Val=%x\n",Val); 
    
    /* 浮点数格式化字符输出示范 */
    printf("----- 浮点数格式化字符输出示范----\n"); 
    printf("%%f的输出,Val=%f\n",Val1);
    printf("%%g的输出,Val=%g\n",Val1);     
    printf("%%e的输出,Val=%e\n",Val1);
    
    system("pause");
    return 0;
}
