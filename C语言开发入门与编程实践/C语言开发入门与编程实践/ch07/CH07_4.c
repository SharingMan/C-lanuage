#include<stdio.h>
#include<stdlib.h>
/*����ԭ������*/
void fun(int, int);
int main()
{	
	int a,b;
 	a=10;
    b=15;
    /*����������е�a,bֵ*/
    printf("��������:\na=%d,\tb=%d\n",a,b);	
    printf("a�ĵ�ַ:%p, b�ĵ�ַ:%p\n",&a,&b);
	/*���ú���*/
    fun(a,b);
    /*�ָ���*/
	printf("-----------------------------------------\n");
 	/*������ú������a,bֵ*/
  	printf("���ú�����:\na=%d,\tb=%d\n",a,b);
  	printf("a�ĵ�ַ:%p, b�ĵ�ַ:%p\n",&a,&b);
  	system("pause");
 	return 0;	
}
void fun(int a, int b)
{
 	printf("-----------------------------------------\n");
    printf("fun ������:\na=%d, b=%d\n",a,b);
    printf("a�ĵ�ַ:%p, b�ĵ�ַ:%p\n",&a,&b);
	a=20;
	b=30;/*���躯���ڵ�a,bֵ*/
	printf("�����ڱ����ֵ��:a=%d, b=%d\n",a,b);
}
