#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c1;
    char c2;   
    
    printf("���ɼ������뺺��,������밴Enter����");
    c1=getchar();
    c2=getchar();/* ��ȡ�����ַ�  */ 
    printf("������ĺ���Ϊ��");
    putchar(c1);
    putchar(c2); /* ����putchar����������� */ 
    printf("\n");
    system("pause");
    return 0; 
}
