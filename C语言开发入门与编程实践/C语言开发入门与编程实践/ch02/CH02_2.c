#include<stdio.h>
#include <stdlib.h>

int main()
{	
	
	short int number1=32767;/*����������*/
  	int number2=0;/*��������*/
    long int number3=1234567890;/*����������*/
    unsigned long int number4=978654321;/*�����޷��ų�����*/
 	
     /*�����������������*/ 
     
	printf("������Ϊ:%d=%d �ֽ�\n",number1,sizeof(number1));
	printf("����Ϊ: %d = %d�ֽ�\n",number2,sizeof(number2));
	printf("������Ϊ: %d=%d�ֽ�\n",number3,sizeof(number3));
	printf("�޷��ų�����Ϊ: %d=%d�ֽ�\n",number4,sizeof(number4));
	
    system("pause");
 	return 0;
} 
