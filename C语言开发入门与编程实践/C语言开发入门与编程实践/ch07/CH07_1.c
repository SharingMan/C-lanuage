#include <stdio.h>
#include <stdlib.h>

int Add_Fun(int a, int b )/* ����Ϊa,b,����ֵΪ���� */ 
{
return a+b; /*������������ */ 
} /* �������������� */ 

int main()
{
    int x;
    int y;

    printf( "���������� x=��" );
    scanf( "%d", &x );
    printf( "���������� y=��" );
    scanf( "%d", &y );
    printf( "�����������%d\n",Add_Fun(x,y) );/*����Add_Fun����������ӡ����ֵ */ 

    system("pause");
    return 0;
}
