/*�߼���������ϰ*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=5,c=7;      /*����a��b��c����������������ָ����ʼֵ*/

	printf("a<b && b<c || c<a = %d\n",a<b && b<c || c<a); 
    /* �ȼ��㡸a<b && b<c����Ȼ���ٽ�����롸c<a������OR������ */  
	printf("!a<b && b<!c || c<a = %d\n",!a<b && b<!c || c<a);
     
	system("pause");
    return 0;
}
