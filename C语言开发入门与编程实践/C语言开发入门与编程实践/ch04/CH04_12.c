#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h=10,day=0;	
	do                                  /*do-whileѭ����ʼ*/
   {                                 
		day++;                          /*��������*/
		if(h-=2)                        /*ÿִ��һ��ѭ���߶ȼ���2����(h=h-2)*/
			h++;                        /*�ӻ�1����(h=h+1)*/
   } while(h>0);                         /*ѭ������������Ϊ�߶ȴ���0*/
   printf("��Ҫ %d ��\n", day);         /*��ӡ������*/
   
   system("pause");
   return 0;
}
