#include <stdio.h>
#include <stdlib.h>

int Factorial( int );  /* �׳����㣬ʹ�õݹ飬������ݹ���� */

int main( void )
{
    int number, answer;
    
    printf( "��������ֵ��׳ˣ�" );
    scanf( "%d", &number );
    answer = Factorial(number);
    printf( "%d! = %d\n", number, answer );
    system("pause");
    return 0;
}

/* �Ա�����numberָ����ֵ���н׳����� */
/* ����ֵ���׳������� */
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
        printf( "�ݹ������%d\n", count );
        return 1;
    }
}
