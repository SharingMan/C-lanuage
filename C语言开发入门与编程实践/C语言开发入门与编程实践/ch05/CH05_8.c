#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[40];                 /* �����ַ����� Str_1[40] */
	char Str_2[40];                 /* �����ַ����� Str_2[40] */
	int count;
    
    printf("�ַ��� Str_1 ������:");
    gets(Str_1);
	printf("�ַ��� Str_2 ������:");
	gets(Str_2);
	
	for (count=0; Str_1[count] != '\0' && Str_2[count] != '\0'; count++)
	     if ( Str_1[count] == Str_2[count] )
			 continue;                           /* ���������Ƚ���һ���ַ� */
		 else
			 break;                               /* ����ȼ�����ѭ����ִ�� */
		
	if ( Str_1[count] == '\0' && Str_2[count] == '\0' ) /* �ж������ַ����Ƿ񶼱Ƚϵ���β�ַ� */
		printf("2���ַ������...");                     /* ��ʾ��� */
	else
		printf("2���ַ��������...");                   /* ��ʾ��� */

	printf("\n"); 
     
     system("pause");                                    
     return 0;
     
}
