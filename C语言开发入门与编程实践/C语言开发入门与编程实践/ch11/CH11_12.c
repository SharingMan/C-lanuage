#include <stdio.h>
#include <stdlib.h>
#include <string.h>      /* ���� <string.h> ͷ�ļ� */

int main()
{
	/* �����ַ����� Work_Str[80] */
	char Work_Str[80]="His school is there. His family is near school."; 
	
    printf("ԭʼ�ַ�������:");
    puts(Work_Str);
    printf("\n");                                           /* ���� */
    puts("��His�滻��Her  ...");
	printf("\n");                                           /* ���� */

    while ( strstr(Work_Str, "His") )                       /* ʹ�� strstr() ������Ѱ�ַ��� */
	 	strncpy( strstr(Work_Str, "His"), "Her", 3 );       /* ʹ�� strncpy() �����滻�ַ��� */
	
	
	printf("�ַ����滻֮��:");
	puts(Work_Str);                                         /* ��ʾ��� */
		
	printf("\n");                                           /* ���� */
    
    system("pause");
    return 0;
}
