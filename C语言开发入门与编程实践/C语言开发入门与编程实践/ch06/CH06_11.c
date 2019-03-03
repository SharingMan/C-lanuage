#include <stdio.h>                 
#include <stdlib.h>               

int main()
{
    int A[3][3]={	{ 1, 2, 3}, /*定义二维整数数组 A[3][3]，并指定初始值*/
                { 4, 5, 6},
                { 7, 8, 9}};
    int B[3][3]={	{ 11, 12, 13},            /*定义二维整数数组 B[3][3]，并指定初始值*/
                { 14, 15, 16},
                { 17, 18, 19}};
    int C[3][3];               /* 定义二维整数数组 C[3][3]*/

    int *pA=&A[0][0];         /*指针变量 *pA 指向 A 数组起始地址*/
    int *pB=&B[0][0];         /*指针变量 *pB 指向 B 数组起始地址*/
    int *pC=&C[0][0];         /*指针变量 *pC 指向 C 数组起始地址*/

    int i, j;

    for ( i=0; i < 3; i++)    /*使用 for循环进行矩阵相加与指针运算存取数组中各元素值*/
       for ( j=0; j < 3; j++)
          *(pC+i*3+j)=*(pA+i*3+j)+*(pB+i*3+j); 

    printf("A 矩阵的内容:\n");
    for ( i=0; i < 3; i++)          
    {
       for ( j=0; j < 3; j++)
        printf("%d\t",*(pA+i*3+j));  /*使用指针变量运算读取 A 数组内各元素*/
        printf("\n"); 
    }

    printf("B 矩阵的内容:\n");
    for ( i=0; i < 3; i++)                      
    {
       for ( j=0; j < 3; j++)
          printf("%d\t",*(pB+i*3+j)); /*使用指针变量运算读取 B 数组内各元素*/
          printf("\n");    
    }

    printf("C 矩阵的内容:\n");
    for ( i=0; i < 3; i++)           
    {
       for ( j=0; j < 3; j++)
          printf("%d\t",*(pC+i*3+j));; /*使用指针变量运算读取 C 数组内各元素*/
          printf("\n"); 
    }
    system("pause");
    return 0;
}
