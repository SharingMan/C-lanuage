#include <stdio.h>
#include <stdlib.h>
/* 无意义的函数，纯綷示范传值调用 */
void CallByValue(int x)
{
    x = 30;
}

/* 无意义的函数，纯綷示范传址调用 */
void CallByAddress(int *x)
{
    *x = 30;
}
void CallMix(int x,int *y)
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    printf( "传值调用前：%d\n", x );
    CallByValue(x);/* 调用传值函数 */ 
    printf( "传值调用后：%d\n", x );
    printf("-------------------------------------------\n");
    printf( "传址调用前：%d\n", x );
    CallByAddress(&x);/* 调用传址函数 */ 
    printf( "传址调用后：%d\n", x );
    printf("-------------------------------------------\n");
     printf( "混合型调用前：%d %d\n", x ,y);
    CallMix(x,&y);
    printf( "混合型调用后：%d %d\n", x ,y);
    
    system("pause");
    return 0;
}
