#include <stdio.h>
#include <stdlib.h>

void foo(void);  /* ������ĺ�����������ʾ�ֲ�����ֵ */

int x = 10; /* ����ȫ������� x  */ 

int main(void)
{
    printf( "ȫ������� x = %d\n", x );
    foo();
    printf( "ȫ������� x = %d\n", x );

    system("pause");
    return 0;
}

void foo(void)
{
    int x = 20;/* �����ֲ����� x */ 

    printf( "�ֲ����� x = %d\n", x );
}
