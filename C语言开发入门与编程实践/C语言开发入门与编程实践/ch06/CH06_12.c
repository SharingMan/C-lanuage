#include <stdio.h>                   // ����ͷ�ļ� <stdio.h>
#include <stdlib.h> 

int main()
{
	 char Name[]="John";                /* �����ַ����� Name[]����ָ�����ʼֵ*/
	 char *p_N="Mary";                  /*�����ַ���ָ�� *p_N����ָ�����ʼֵ*/
	 printf("Name[] �ĵ�ַ:%p Name��һ���ַ���ַ=%p �ַ���������:%s\n" ,&Name ,Name+0,Name);    
              /*��ʾ�ַ����������*/
	 /* Name++; NameΪָ�볣��,�������� */ 
	 /* Name=p_N NameΪָ�볣��,���ɸı���ֵ */
      
     printf("p_N�ĵ�ַ:%p p_N��һ���ַ���ַ=%p �ַ���������:%s\n" ,p_N ,p_N+0,p_N);/*��ʾ�ַ���ָ�������*/
	 p_N=Name;/* p_N ָ�����,�ɸı���ֵ  */  
	 printf("p_N �ַ�����������:%s\n" ,p_N );        /*��ʾ�ַ���ָ�������*/
	 p_N++; /* p_N ָ�����,�ɽ�������  */
     printf("p_N �ַ�����������:%s\n" ,p_N ); 
     
     system("pause");
     return  0;
}
