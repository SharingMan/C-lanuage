#include <stdio.h>
#include <string.h>      /* ���� <string.h> ͷ�ļ� */
#include <stdlib.h>

int main()
{
	char Work_Str[80];                    /* �����ַ����� Work_Str[80] */
	char Str_1[40];                       /* �����ַ����� Str_1[40] */
	char Str_2[40];                       /* �����ַ����� Str_2[40] */
	
    printf("�Ƚ�����2���ַ���:\n");
    printf("�������һ���ַ���:\n"); 
    gets(Str_1);
    printf("Str_1=%s\n", Str_1);
    printf("������ڶ����ַ���:\n"); 
    gets(Str_2);
    printf("Str_2=%s\n", Str_2);
	printf("\n");                               /* ���� */

    /* �Ƚ��ַ����Ĵ�С */
	if ( strcmp(Str_1, Str_2) )                    /* ʹ�� strcmp() �����Ƚ��ַ��� */
		if ( strcmp(Str_1, Str_2) > 0 )                     /* Str_1 �ַ��� > Str_2 �ַ��� */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " > ");                        /* ���� ">" ���� */
			strcat(Work_Str, Str_2);
		}
		else                             /* Str_1 �ַ��� < Str_2 �ַ��� */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " < ");                        /* ���� "<" ���� */
			strcat(Work_Str, Str_2);
		}
	else                                          /* Str_1 �ַ��� = Str_2 �ַ��� */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " = ");                   /* ���� "=" ���� */
			strcat(Work_Str, Str_2);
		}

	printf("�ȽϵĽ��:");
	puts(Work_Str);                                 /* ��ʾ��� */
		
	printf("\n");                                    /* ���� */
 
    system("pause");
    return 0;
}
