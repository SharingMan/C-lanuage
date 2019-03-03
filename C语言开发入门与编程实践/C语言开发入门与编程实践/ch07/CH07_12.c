#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int (*pfunc[])(int,int)={add,sub,mul};/* 函数指针数组声明时也可同时指派初始值 */

int main()
{
    char c[]={'+','-','*'};
    int x,y,i;
            printf("x=");
            scanf("%d",&x);
            printf("y=");
            scanf("%d",&y);
    printf("--------------------------------------------\n"); 
            for(i=0;i<3;i++)
            {
            printf("%d%c%d=%d\t",x,c[i],y,pfunc[i](x,y));/* 透过for循环方     式执行函数指针所指向的函数地址。*/
            }  
     printf("\n");                   
     printf("--------------------------------------------\n");                   
    system("pause");
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
