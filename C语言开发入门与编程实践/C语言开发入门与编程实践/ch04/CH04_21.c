#include <stdio.h>
#include <stdlib.h>	
	
int main()
{
	char select;
	int g_num;
	double total, amount, discount;

	printf("�����빺�����Ʒ����x(�����),y(������),z(���˼����)��");
	scanf("%c", &select);	                          /*�����ַ����������select*/
    printf("�����빺��������");
	scanf("%d", &g_num);	                          /*�����ַ����������select*/
    printf("---------------------------------------\n");
	switch(select)
	{
	case 'x':  
	case 'X':                                          /*���select����'x'��'X'*/
		total=10000*g_num;                             /*��������䵥��*��������*/
		break;                                         /*����switch*/
	case 'y': 
	case 'Y':                                          /*���select����'y'��'Y'*/
		total=15000*g_num;                             /*���������������*��������*/
		break;                                         /*����switch*/
	case 'z':  
	case 'Z':                                          /*���select����'z'��'Z'*/
		total=25000*g_num;                             /*�������˼��������*��������*/
		break;                                         /*����switch*/
	}
	if (total>=100000)                                  /*����������150000*/
		discount=total*0.15;                            /*��15%�ۿ�*/
	else if (total>=50000)							    /*����������50000*/
		discount=total*0.1;                             /*��10%�ۿ�*/
	else                                                /*����50000*/
		discount=total*0.05;                            /*��5%�ۿ�*/
	
	amount=total-discount;                              /*�ۿۺ���=�ܽ��-�ۿ�*/
	printf("�ܹ�����Ϊ�� %.2f\n", total);      
	printf("�ۿ۽��Ϊ�� %.2f\n", discount); 
	printf("Ӧ�����Ϊ�� %.2f\n", amount);
	
    system("pause");
    return 0;	
}
