#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[40];                     
	char Str_2[40];                    
	char Str_3[80];                                  
	int count, s_record;
    
    printf("�ַ��� Str_1 ������:");
    gets(Str_1);                                   
	printf("�ַ��� Str_2 ������:");
	gets(Str_2);                               

	s_record=0;     /* ���������� s_record �� 0��������¼ Str_3 ��ָ������Ԫ�� */

    for (count=0; Str_1[count] != '\0'; count++, s_record++)  /* �� Str_1 �ַ������Ƶ� Str_3 */
		Str_3[s_record]=Str_1[count];

	for (count=0; Str_2[count] != '\0'; count++, s_record++)  /* �� Str_2 �ַ������Ƶ� Str_3 */
		Str_3[s_record]=Str_2[count];

	Str_3[s_record]='\0';                                     /* �ַ������Ҫ���� NULL �ַ� */

    printf("�������ַ��� Str_3:%s", Str_3);                   /* ��ʾ�ַ�������Ľ�� */
	printf("\n");   /* ���� */
    
    system("pause");   
    return 0;                                       
}
