#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[31];
    
    if((fptr = fopen("���乫��.txt", "r")) ==NULL)    /* ����ļ��Ƿ�򿪳ɹ� */
        puts("�޷����ļ�");
    else
        while( !feof(fptr) )/* �ж��ļ��Ƿ��ȡ��� */
        {
            fgets(str, 31, fptr);    /* str[31]����������'\0' */
            printf("%s\n", str);  
        }

    fclose(fptr);    /* �ر��ļ� */
     
    system("pause");
    return 0;

}
