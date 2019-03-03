#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int sub(int,int);
int Math(int,int,int (*pfunc)(int,int));/* 具有参数函数指针的函数原型声明 */

int main()
{
    int x,y;
    
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("-----------------------------------\n"); 
    printf("%d+%d=%d\n",x,y,Math(x,y,add));/* 调用 add(),并打印出其值 */ 
    printf("%d-%d=%d\n",x,y,Math(x,y,sub)); /* 调用 sub(),并打印出其值 */                                                            
        
    system("pause");
    return 0;
}
/* 具有参数函数指针的函数定义 */
int Math(int a,int b,int (*pfunc)(int,int))
{
    return (*pfunc)(a,b);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
