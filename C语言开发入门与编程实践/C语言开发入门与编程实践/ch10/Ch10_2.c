#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    if((fptr = fopen("test.txt", "r")) ==NULL)    /* ����ļ��Ƿ�򿪳ɹ� */
        puts("�޷����ļ�");
    else
        while( !feof(fptr) ) /* �ж��ļ��Ƿ��ȡ��� */
        printf("%c", fgetc(fptr));/*һ�ζ�ȡһ���ַ�,�𲽽��ı��ļ����ݶ��� */
    
    fclose(fptr);    /* �ر��ļ� */
    printf("\n");
    system("pause");
    return 0;

}
