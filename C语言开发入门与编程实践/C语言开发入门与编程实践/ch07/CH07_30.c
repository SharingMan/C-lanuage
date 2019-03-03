#include <stdio.h>
#include <stdlib.h>

int add(int, int);  /* 整数加法 */
int sub(int, int);  /* 整数减法 */
int mul(int, int);  /* 整数乘法 */
int dvd(int, int);  /* 整数除法 */

int main( )
{
    int (*ptr)(int, int);/* 函数指针的原型声明 */ 
    int result,no1,no2;
    char ch;
    
    printf("输入运算符号:");
    ch=getchar();
    printf("-----------------------------------\n");
    
    
        switch ( ch )
          {
            case '+':
                ptr = add;    /* 指定加法函数地址给ptr */
                break;
            case '-':
                ptr = sub;    /* 指定减法函数地址给ptr */
                break;
            case '*':
                ptr = mul;    /* 指定乘法函数地址给ptr */
                break;
            case '/':
                ptr = dvd;    /* 指定除法函数数地址给ptr */
                break;
            
            default:
                puts( "操作符有误！" );
                system("pause");
                exit(0);/* 结束程序 */ 
         }
         
      printf("请输入运算的第一个数值:" );
      scanf("%d",&no1);
      printf("请输入运算的第二个数值:" );
      scanf("%d",&no2);
      result = ptr(no1, no2);/* 依照ptr所指定的函数调用 */ 
      printf( "运算结果：%d\n", result );

    system("pause");
    return 0;
}

int add(int num1, int num2)
{
    return num1+num2;
}

int sub(int num1, int num2)
{
    return num1-num2;
}

int mul(int num1, int num2)
{
    return num1*num2;
}

int dvd(int num1, int num2)
{
    return num1/num2;
}
