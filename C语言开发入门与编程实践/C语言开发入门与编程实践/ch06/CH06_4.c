#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int *int_ptr;   /* ������������ָ�� */
    int iValue=12345;
    double *double_ptr,dValue=1234.56;/* ����˫����ʵ������ָ�� */
    
    int_ptr=&iValue;
    double_ptr=&dValue;
    
    /* ����ָ��ӷ���������� */
        
        printf( "int_ptr   = %p\n", int_ptr);
        int_ptr++;/* ������1������������λ */
        printf( "int_ptr++ = %p\n", int_ptr);
        int_ptr--; /* ������1������������λ */
        printf( "int_ptr -- = %p\n", int_ptr);
        int_ptr=int_ptr+3; /* ������3������������λ */
        printf( "int_ptr+3 = %p\n\n\n", int_ptr);
        
        printf( "double_ptr   = %p\n", double_ptr);
        double_ptr++;/* ������1��˫����ʵ��������λ */
        printf( "double_ptr++   = %p\n", double_ptr);
        double_ptr--;/* ������1��˫����ʵ��������λ */
        printf( "double_ptr--   = %p\n", double_ptr);
        double_ptr=double_ptr+3;/* ������3��˫����ʵ��������λ */
        printf( "double_ptr+3   = %p\n", double_ptr);
        
        system("pause");
        return 0;
  }
