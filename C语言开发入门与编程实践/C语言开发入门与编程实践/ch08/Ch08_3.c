#include <stdio.h>
#include <stdlib.h>

#define NEWLINE putchar('\n')
#define COPYRIGHT owner()

void owner(void);    /* ���ӵ������Ϣ�ĺ��� */

int main(void)
{
    COPYRIGHT;/* ���ú� */ 
    NEWLINE;/* ���ú� */
    COPYRIGHT;/* ���ú� */

    system("pause");
    return 0;
}

void owner(void)
{
    printf("��������Ҳ���Ժ궨��\n");
    printf("��Ȩ�����ˣ�Michael\n");
    printf("���ڣ�2007/01/01\n");
}
