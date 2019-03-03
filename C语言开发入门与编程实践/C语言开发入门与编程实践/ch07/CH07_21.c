#include <stdio.h>
#include <stdlib.h>

int Factorial( int );  /* 阶乘运算函数*/
static int count ;/* 声明静态外部变量 */
int main()
{
    int number, answer;

    printf( "请输入数值求阶乘：" );
    scanf( "%d", &number );/* 输入阶层数目 */ 
    answer = Factorial(number);/* 调用 Factorial()函数 */ 
    printf( "%d! = %d\n", number, answer );
    printf("count =%d\n",count);/* 打印目前的count值 */ 
    system("pause");
    return 0;
}

/* 自变量：number指定数值进行阶乘运算 */
/* 返回值：阶乘运算结果 */
int Factorial( int number )
{
int i;
    count=1;
    for(i=1;i<=number;i++)
    count=count*i;
    return count;
}
