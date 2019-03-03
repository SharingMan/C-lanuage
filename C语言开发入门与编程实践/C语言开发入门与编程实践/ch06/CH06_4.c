#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int *int_ptr;   /* 声明整数类型指针 */
    int iValue=12345;
    double *double_ptr,dValue=1234.56;/* 声明双精度实数类型指针 */
    
    int_ptr=&iValue;
    double_ptr=&dValue;
    
    /* 整数指针加法与减法运算 */
        
        printf( "int_ptr   = %p\n", int_ptr);
        int_ptr++;/* 向右移1个整数基本单位 */
        printf( "int_ptr++ = %p\n", int_ptr);
        int_ptr--; /* 向左移1个整数基本单位 */
        printf( "int_ptr -- = %p\n", int_ptr);
        int_ptr=int_ptr+3; /* 向右移3个整数基本单位 */
        printf( "int_ptr+3 = %p\n\n\n", int_ptr);
        
        printf( "double_ptr   = %p\n", double_ptr);
        double_ptr++;/* 向右移1个双精度实数基本单位 */
        printf( "double_ptr++   = %p\n", double_ptr);
        double_ptr--;/* 向左移1个双精度实数基本单位 */
        printf( "double_ptr--   = %p\n", double_ptr);
        double_ptr=double_ptr+3;/* 向右移3个双精度实数基本单位 */
        printf( "double_ptr+3   = %p\n", double_ptr);
        
        system("pause");
        return 0;
  }
