#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])/* �������Ա����������� */ 
{
    int i;
    if( argc == 1 )/* ֻ�г������� */ 
        printf( "δָ��������" );
    else
    {
        printf("������Ĳ���Ϊ��\n");
        for( i = 0; i < argc; i++ )
            puts(argv[i]);/* ��ӡ argv��������� */ 
    }
    system("pause");
    return 0;
}
