# include <stdio.h>
# include <string.h>      /* ���� <string.h> ͷ�ļ� */
# include <ctype.h>       /* ���� <ctype.h> ͷ�ļ� */
# include <stdlib.h>
  
int main()
  
{ 
	char Usr_Name[20];                         /* �����ַ����� Usr_Name[20] */
	char Usr_Code[20];                          /* �����ַ����� Usr_Code[20] */
	unsigned int count, failed_name, digit;            /* ������� failed �� digit��*/
                                             /* ��Ϊ�����жϵı�־�� */
	do
	{
		failed_name=digit=0;                   /* ������ failed_name �� digit ��0 */
			
	    printf("�趨ʹ��������:");
	    gets(Usr_Name);                       /* ��ȡ Usr_Name �ַ��� */
         printf("�趨ʹ��������:");
	    gets(Usr_Code);                       /* ��ȡ Usr_Name �ַ��� */
  
         printf("\n");                        /* ���� */
  
		for (count=0; count < strlen(Usr_Name); count++)
			if ( !isalnum(Usr_Name[count]) )     /* ����Ƿ�ΪӢ����������ĸ */
			{
				failed_name=1;
				puts("ʹ��������ֻ������Ӣ���������ַ�.\n");
				break;                    /* ���� for ѭ�� */
			}
  
		for (count=0; count < strlen(Usr_Code); count++)
			if ( !isalnum(Usr_Code[count]) )      /* ����Ƿ�ΪӢ����������ĸ */
			{
				puts("����ֻ������Ӣ���������ַ�.\n");
				break;                     /* ���� for ѭ�� */
			}
			else
				if ( isdigit(Usr_Code[count]) )    /* ����Ƿ�Ϊ������ĸ */
				   digit=1;
  
		if ( digit != 1 )
			puts("������躬�������ַ�\n");
	 }
        while ( failed_name || !digit );          /* ������ȷ��������� */
          puts("ʹ���������������趨���!!\n");
      
        system("pause");
        return 0;
}
