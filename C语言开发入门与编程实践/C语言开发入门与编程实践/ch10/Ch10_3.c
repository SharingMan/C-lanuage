#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[20],ch;

    printf("�������ļ����ƣ�");
    scanf("%s", filename);

    if((fptr = fopen(filename, "w")) == NULL)
        printf("�ļ���ʧ�ܣ�");
    else
    {
        while ((ch=getche())!='\r')    /* ������벻ΪEnter���������ѭ�� */
            fputc(ch, fptr);/* ���ַ�д���ļ� */ 
    }

    fclose(fptr);    /* �ر��ļ� */
    printf("\n");
    system("pause");
    return 0;
}
