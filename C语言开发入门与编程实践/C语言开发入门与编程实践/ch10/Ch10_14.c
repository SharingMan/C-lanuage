#include <stdio.h>
#include <fcntl.h> /* ��ģʽ�����������ͷ�ļ� */ 
#include <sys\stat.h> /* O_CREAT�����������ͷ�ļ� */
#include <io.h> /* �޻������ļ���ȡ�����������ͷ�ļ� */ 
#include <string.h>
#include <stdlib.h>

int main()
{
    char buffer[256];   /* �������û�����,һ�οɶ�ȡ256���ֽ� */
    int fhdl;

    printf("������һ���ַ�����");
    gets(buffer);

    /* �ļ�д�� */
    if( (fhdl = open("lowio.txt", O_WRONLY)) == -1)
            printf("�ļ���ʧ�ܣ�");
    else
    {
        write(fhdl, buffer, sizeof(buffer)); /* ��fhd1�ļ�,ÿ��д��256���ֽ� */
        close(fhdl);
    }

    /* �ļ���ȡ */
    if( (fhdl = open("lowio.txt", O_RDONLY | O_TEXT)) == -1)
            printf("�ļ���ʧ�ܣ�");
    else
    {
        read(fhdl, buffer, sizeof(buffer));/* ��fhd1�ļ�,ÿ�ζ�ȡ256���ֽ� */ 
        printf("�����ַ�����");
        puts(buffer);
        close(fhdl); /* �ر��ļ� */ 
    }
    system("pause");
    return 0;
}
