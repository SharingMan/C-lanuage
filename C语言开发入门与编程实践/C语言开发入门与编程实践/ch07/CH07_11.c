#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int sub(int,int);
int Math(int,int,int (*pfunc)(int,int));/* ���в�������ָ��ĺ���ԭ������ */

int main()
{
    int x,y;
    
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("-----------------------------------\n"); 
    printf("%d+%d=%d\n",x,y,Math(x,y,add));/* ���� add(),����ӡ����ֵ */ 
    printf("%d-%d=%d\n",x,y,Math(x,y,sub)); /* ���� sub(),����ӡ����ֵ */                                                            
        
    system("pause");
    return 0;
}
/* ���в�������ָ��ĺ������� */
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
