#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    char ch1 = 'A';

    puts( "��������  ����ֵ  �ڴ��ַ" );
    puts( "----------------------------" );
    printf( "num1\t   %d\t   %p\n", num1, &num1 );
    printf( "ch1\t   %c\t   %p\n", ch1, &ch1 );

    system("pause");
    return 0;
}
