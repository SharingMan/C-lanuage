#include <stdio.h>
#include <stdlib.h>

char* strcopy(char*, char*);   /* �ַ������ƺ������� */

int main( )
{
    char strscr[80];
    char strdes[80];

    printf( "������һ��Ӣ���ַ�����" );
    scanf( "%s", strscr );
    strcopy(strdes, strscr);
    printf( "�ַ������ƣ�%s\n", strdes );
    
    system("pause");
    return 0;
}

/* �Ա�����strscr��Դ�ַ���        */
/*       strdesĿ���ַ���        */
/* ����ֵ���ַ������ƽ��strdes  */
char* strcopy(char* strdes, char * strscr)
{
    int i = 0;

    while ( *(strscr+i) != '\0' )
    {
        *(strdes+i) = *(strscr+i);
        i++;
    }

    *(strdes+i) = '\0'; /* �ַ�����ÿ���ַ�������Ϻ�,�ǵü��Ͽ��ַ� */
    return strdes;
}
