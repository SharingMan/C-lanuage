#include <stdio.h>
#include <stdlib.h>		

int main()
{
	char select;
	puts("(A) �����");
	puts("(B) ����");
	puts("(C) �ձ�");
	printf("��������Ҫ���εĵص㣺");
	scanf("%c", &select);	                          /*�����ַ����������select*/
    
	switch(select)
	{
	case 'a':  
	case 'A':                                         /*���select����'A'��'a'*/
		puts("�������5���� $35000");                 /*����ʾ����*/
		break;                                        /*����switch*/
	case 'b': 
	case 'B':                                         /*���select����'B'��'b'*/
		puts("�����7���� $40000");                   /*����ʾ����*/
		break;                                        /*����switch*/
	case 'c':  
	case 'C':                                         /*���select����'C'��'c'*/
		puts("���ձ�5���� $25000");                   /*����ʾ����*/
		break;                                        /*����switch*/
	default:                                          /*���select������ABC��abc�κ�һ��*/
		printf("ѡ�����\n");                        
	}
	system("pause");
    return 0;	
}
