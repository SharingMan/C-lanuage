#include <stdio.h>
#include <stdlib.h>

int Factorial( int );  /* 阶乘运算，使用递归，并计算递归次数 */

int main( void )
{
    int number, answer;
    
    printf( "请输入数值求阶乘：" );
    scanf( "%d", &number );
    answer = Factorial(number);
    printf( "%d! = %d\n", number, answer );
    system("pause");
    return 0;
}

/* 自变量：number指定数值进行阶乘运算 */
/* 返回值：阶乘运算结果 */
int Factorial( int number )
{
    static int count = 1;
    if ( number > 1 )
    {
        count++;
        return number*Factorial(number-1);
    }
    else
    {
        printf( "递归次数：%d\n", count );
        return 1;
    }
}
