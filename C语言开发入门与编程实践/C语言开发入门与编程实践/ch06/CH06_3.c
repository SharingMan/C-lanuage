#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=255;         /* �������� */
    
    int *piVal,*piVal1; /* ���������������͵�ָ����� */ 
    piVal= &value;   /* ָ��value ������ַ */
    piVal1=piVal; /* piVal1ָ��piVal�ĵ�ַ */ 
     
    printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    *piVal=300; /* �����趨piValָ��������������� */ 
     printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    *piVal1=500; /* �����趨piVal1ָ��������������� */ 
     printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    system("pause");      
    return 0;
}
