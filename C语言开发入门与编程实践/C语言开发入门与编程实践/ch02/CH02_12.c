#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    /*��������ת���Ľ��*/  
     int i=2;
     float f=5.2;
     double d;
     unsigned char c=132;/* char������ֵ����127,����unsigned������,
                             ʹ���Ϊ���� */ 
     
    /*��ӡ�����������ͱ����ĳ�ʼֵ*/
     printf("i=%d\nf=%f\nc=%d\n",i,f,c);
     d=i+f; /* �������������ļ���*/
 	 c=c/i;  /* �ַ������� */  
     printf("---------------------------------\n"); 
     printf("d=i+f=%f\nc������ֵ=%d\nc���ַ�ֵ=%c\n",d,c,c);
     printf("---------------------------------\n"); 
     system("pause");
     return 0;
}
