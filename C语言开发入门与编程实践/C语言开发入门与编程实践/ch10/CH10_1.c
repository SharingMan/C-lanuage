#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pf;        /*�����ļ�����ָ��*/
    pf = fopen("test.txt", "r");
    /* ���ļ�test.txt�Թ���ȡ */ 
    if(pf!=NULL) /* �ж��ļ��Ƿ�򿪳ɹ� */
        {
        printf("OK!�ļ���\n");
        fclose(pf);/* �ر������� */
        }
    else
        printf("FAIL!�ļ���ʧ��\n");
               
    system("pause");
    return 0;
}
