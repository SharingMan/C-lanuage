#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int count=0;
    char filename[50];
    printf("�����ļ�����:"); 
    gets(filename);
    
    if((fptr = fopen(filename, "r")) ==NULL)    /* ����ļ��Ƿ�򿪳ɹ� */
        puts("�޷����ļ�");
    else
        while( !feof(fptr) ) /* �ж��ļ��Ƿ��ȡ��� */
        {
         fgetc(fptr);/*һ�ζ�ȡһ���ַ�,�𲽽��ı��ļ����ݶ��� */
         count++;/* �����ֽ� */
         }
    printf("�ļ���С:%d �ֽ�\n",count-1); 
    fclose(fptr);    /* �ر��ļ� */

    system("pause");
    return 0;

}
