#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[80], str2[80];
    int i, j, same = 1;

    printf("�ַ���1��");
    scanf("%s", str1);
    printf("�ַ���2��");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0'; i++);/* ���� str1 �ַ������� */ 
    for(j = 0; str2[j] != '\0'; j++);/* ���� str2 �ַ������� */
    if(i != j)
        same = 0; /* ���ַ�������� */ 
    else
        for(i = 0; str1[i] = '\0'; i++)
            if(str1[i] != str2[i])
                same = 0;/* ���ַ�������� */ 
    if(same)
        printf("�ַ���1�����ַ���2\n");
    else
        printf("�ַ����������ַ���2\n");
    
    system("pause");
    return 0;
}
