#include<stdio.h>
#include<stdlib.h>

void kgtopound(double);/* ����ԭ������ */ 
int main()
{	
	double kg;
	extern double pound;
	/* ����extern���δ�,�����������ں����·����ⲿ���� */ 
	printf("����תӢ��\n");
	printf("-----------------------------------\n");
    printf("һ����=%fӢ��\n",pound);
    printf("-----------------------------------\n");
	printf("�����빫����:");
 	
    scanf("%lf",&kg);
   	kgtopound(kg);
   	
   	system("pause");
 	return 0;	
}/*�����ں�������ⲿ����*/
double pound=2.204634;
void kgtopound(double kg)
{
	printf("%.1lf����=%.3fӢ��\n",kg,pound*kg);
	/* �˺������ⲿ����pound���·�,��˿�ֱ��ʹ�� */ 
}
