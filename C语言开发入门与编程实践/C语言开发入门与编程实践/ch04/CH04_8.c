#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("************ �žű��ӡ��� ***************\n\n"); 
	
   for (a=1;a<=9;a++)			/* ���forѭ������a��� */
	{
		for (b=1;b<=9;b++)		/* �ڲ�forѭ������b��� */
		{
			printf("%dx%d=%d\t",b,a,a*b);
		}
		printf("\n");           /* ����Ȧ��1��,��Ȧ����9�� */
	}
	system("pause");
	return 0;
}
