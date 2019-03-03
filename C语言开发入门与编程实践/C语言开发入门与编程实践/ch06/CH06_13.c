#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[4][10] = { "Justinian", "Momo", "Becky", "Bush" };
    int i, j;

    for ( i = 0; i < 4; i++ )
    {
        for ( j = 0; j < 10; j++ )
        {
            if( name[i][j] == '\0')
                printf("0");/* 是空字符则打印出0 */ 
            else
                printf( "%c", name[i][j] );
        }
        putchar('\n');/* 换行 */ 
    }
    system("pause");
    return 0;
}
