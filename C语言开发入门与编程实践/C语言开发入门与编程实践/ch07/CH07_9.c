#include <stdio.h>
#include <stdlib.h>

char* Strcat(char*, char*);   /* �ַ������Ӻ���ԭ������ */

int main( void )
{
    char str1[80];
    char str2[80];

    printf( "������һӢ���ַ�����" );
    scanf( "%s", str1 );
    printf( "������һ�����ַ�����" );
    scanf( "%s", str2 );
    printf( "�ַ������ӣ�%s\n", Strcat(str1, str2) );
    
    system("pause");
    return 0;
}

/* �Ա�����str1��str2����       */
/* ����ֵ�����ش��ӽ��str1   */
char* Strcat(char* str1, char* str2)/* ����ֵΪ�ַ���ָ�� */ 
{
    int i = 0;
    int j = 0;

    while ( *(str1+i) != '\0' )  /* Ѱ��str1�Ľ����ַ�'\0'λ�� */
        i++;
    while ( *(str2+j) != '\0' )
    {
        *(str1+i+j) = *(str2+j);/* str1�ַ�����ʼ���ַ����� */ 
        j++;
    }

    *(str1+i+j) = '\0';    /* �ǵü��Ͽ��ַ� */

    return str1;
}
