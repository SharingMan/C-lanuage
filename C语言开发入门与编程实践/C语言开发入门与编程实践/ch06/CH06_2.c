#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iVal=10;         /* �������� */
    double dVal=123.45;   /* ˫����ʵ������ */
    
    int* piVal=NULL; /* ����Ϊ��ָ�� */ 
    piVal= &iVal;   /* �������͵�ָ�������ָ��iVal������ַ */
    
    double* pdVal=&dVal;    /* ˫����ʵ�����͵�ָ�������ָ��dVal������ַ */
    
    printf("piVal ������ַΪ %p\n",piVal);
    printf("piVal ������ָ���ַ����������Ϊ %d\n",*piVal);        
             
   *piVal=20; /* ����ָ��piValָ���������������Ϊ20 */ 
    printf("piVal ָ����������趨��,iVal����������ͬ������Ϊ %d\n",iVal);  
    printf("����iVal��ռ�õ��ڴ�ռ�Ϊ:%d λ\n", sizeof(iVal));
    printf("����ָ�����piVal��ռ�õ��ڴ�ռ�Ϊ:%d λ\n\n\n", sizeof(piVal));
    
    printf("pdVal ������ַΪ %p\n",pdVal);
    printf("pdVal ������ָ���ַ����������Ϊ %f\n",*pdVal); 
    
    *pdVal=67.1234; /* ����ָ��pdValָ���������������Ϊ67.1234 */ 
    printf("pdVal ָ����������趨��,dVal����������ͬ������Ϊ %f\n",dVal);  
    printf("˫����ʵ��dVal��ռ�õ��ڴ�ռ�Ϊ:%d λ\n", sizeof(dVal));
    printf("˫����ʵ��ָ�����pdVal��ռ�õ��ڴ�ռ�Ϊ:%d λ\n", sizeof(pdVal));
    
    system("pause");      
    return 0; 
}
