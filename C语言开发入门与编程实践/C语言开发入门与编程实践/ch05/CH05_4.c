#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[]={ 'W', 'o', 'r', 'l', 'd', '!'};          /* �����ַ����� Str_1[] */
	char Str_2[]="World!";                                  /* �����ַ����� Str_2[] */
	
    printf("Str_1 ռ�õ��ڴ�ռ�: %d\n", sizeof(Str_1));  /* ��ʾ Str_1 ռ�õ��ڴ�ռ� */
	printf("�ַ����� Str_1 ������: %s", Str_1);             /* ��ʾ Str_1 ������ */
	printf("\n");                                           /* ���� */
	printf("Str_2 ռ�õ��ڴ�ռ�: %d\n", sizeof(Str_2));  /* ��ʾ Str_2 ռ�õ��ڴ�ռ� */
	printf("�ַ����� Str_2 ������: %s", Str_2);             /* ��ʾ Str_2 ������ */
	printf("\n");                                           /* ���� */
    system("pause");
    return 0;
}
