#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* ���ֵ����*/ 
    int iVal=123456;
    float fVal=123.456;
    /*��ͬ����ֵ�����趨���ʾ��*/
    printf("����ֵ�����趨���ʾ�� iVal=123456\n");
    printf("%%.3d iVal = %.3d\n",iVal);
    printf("%%.6d iVal = %.6d\n",iVal);
    printf("%%.9d iVal = %.9d\n",iVal);
    printf("%%9.3d iVal = %9.3d\n",iVal);
    printf("%%6.6d iVal = %6.6d\n",iVal);
    printf("%%3.9d iVal = %3.9d\n",iVal);
    printf("%%3.9d���Ա���������ʽ iVal = %*.*d\n\n",3,9,iVal);  
    /*��ͬ������ֵ�����趨���ʾ��*/
    printf("������ֵ�����趨���ʾ�� fVal=123.456\n");
    printf("%%.1f fVal = %9.1f\n",fVal);
    printf("%%.3f fVal = %6.3f\n",fVal);
    printf("%%.5f fVal = %3.5f\n",fVal);
    printf("%%9.1f fVal = %9.1f\n",fVal);
    printf("%%6.3f fVal = %6.3f\n",fVal);
    printf("%%3.5f fVal = %3.5f\n",fVal);
    printf("%%3.5f���Ա���������ʽ fVal = %*.*f\n\n",3,5,fVal);  
    
    system("pause");    
    return 0;
}
