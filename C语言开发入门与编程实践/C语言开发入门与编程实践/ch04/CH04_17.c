#include <stdio.h>                                     /* ���� <conio.h> ͷ�ļ� */
#include <conio.h> 

int main()
{
     while ( !kbhit() )                                /* ʹ�� kbhit() �����ȴ�ʹ���߰��� */
		 printf("������һ����������\n");
      return 0;
}
