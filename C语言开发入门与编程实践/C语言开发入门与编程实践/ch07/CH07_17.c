#include <stdio.h>                 
#include <stdlib.h>

int main()                      
{
     auto int iVar=5;              /* ���� auto�������� iVar */

	 printf("��������ǰ��iVar=%d\n",iVar); 

	 /* �����Դ�����������һ�γ���� */
	 printf("------------------------------------\n");
     {
		 auto int iVar=10;       /* ������ж����������� iVar */
         iVar++; /* iVar��һ */ 
         printf("������е� iVar=%d\n",iVar);
	 }

      printf("------------------------------------\n");
      printf("�뿪������ iVar=%d\n",iVar);
     
     system("pause");
     return 0;

}
