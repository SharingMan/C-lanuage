#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[30]; /* �����ַ������� */ 
    printf("������һ���ַ�����\n",c);       
    gets(c); /* ����һ���ַ��� */   
    puts(c); /* ���һ���ַ��� */  
    system("pause");  
    return 0; 
}
