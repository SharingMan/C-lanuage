#include <stdio.h>
#include <stdlib.h>

void toUpper(char*);  /* �ַ���ת��д */

int main()
{
    char str[80];

    printf( "������һ��Ӣ���ַ�����" );
    scanf( "%s", str );
    toUpper(str);
    printf( "�ַ���ת��д�� %s\n", str );
    
    system("pause");
    return 0;
}

/* �Ա����������ַ���   */
/* �����Сдת��д */
void toUpper( char *str )
{
    int i = 0;
    int length;

    while ( str[i] != '\0' )
        i++;/* ���㳤�� */ 
    length = i;

    for( i = 0; i < length; i++ )
        if ( *(str+i) > 96 && *(str+i) < 123 )
            *(str+i) = *(str+i) - 32;/* ת��Ϊ�ַ���ת��д */ 
 }

/* �Ա����������ַ��� */
/* �������дתСд */
