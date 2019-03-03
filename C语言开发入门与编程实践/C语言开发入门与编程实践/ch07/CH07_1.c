#include <stdio.h>
#include <stdlib.h>

int Add_Fun(int a, int b )/* 参数为a,b,返回值为整数 */ 
{
return a+b; /*返回两整数和 */ 
} /* 函数定义与声明 */ 

int main()
{
    int x;
    int y;

    printf( "请输入整数 x=：" );
    scanf( "%d", &x );
    printf( "请输入整数 y=：" );
    scanf( "%d", &y );
    printf( "相加运算结果：%d\n",Add_Fun(x,y) );/*调用Add_Fun函数，并打印返回值 */ 

    system("pause");
    return 0;
}
