#include <stdio.h>
#include <stdlib.h>        /* ���� <stdlib.h> ͷ�ļ� */

int main()
{
	   char Read_Str[20]; /* �����ַ����� Read_Str[20] */
    double d,cubic;
    
		printf("���������ת����ʵ�����ַ���:");
		gets(Read_Str);  /* ��ȡ�ַ��� */
		d=atof(Read_Str); /* atof() �ַ�������ת��,�����ʵ�� */
		cubic=d*d*d; 
      printf("%f ������ֵ=%f \n",d,cubic );     
                                        	
      system("pause");
      return 0;
}
