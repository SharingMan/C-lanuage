#include <stdio.h>
#include <stdlib.h>

void strCat(char*, char*);/* �ַ������Ӻ�����ԭ������ */ 

int main(void)
{
    char str1[80], str2[80]; 
    printf("�����ַ���1��");
    scanf("%s", str1);
    printf("�����ַ���2��");
    scanf("%s", str2);
    
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    strCat(str1, str2);/* ��ֵ���� */
    printf("-----------------------------------\n");
    printf("���Ӻ�� str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    
    system("pause");
    return 0;
}

void strCat(char* str1, char* str2)
{
    int i, j;
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++)
        str1[i+j] = str2[j];/* �����ַ��� */ 
    str1[i+j] = '\0';
}
