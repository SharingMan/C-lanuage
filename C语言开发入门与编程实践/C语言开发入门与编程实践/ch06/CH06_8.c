#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50};
    double arr2[] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
    char arr3[] = { 'A', 'B', 'C', 'D', 'E'};
    int i;

    puts("int数组              double数组           char数组");
    puts("------------------------------------------------------");
    for ( i = 0; i < 5; i++ )
    {
        printf( "arr1+%d = %p   ", i, arr1+i );/* 打印出arr1+i的地址 */ 
        printf( "arr2+%d = %p   ", i, arr2+i );/* 打印出arr2+i的地址 */ 
        printf( "arr3+%d = %p   \n", i, arr3+i );/* 打印出arr3+i的地址 */ 
    }
    printf("arr1 数组长度=%d \n",sizeof(arr1)/sizeof(arr1[0]));
    printf("arr2 数组长度=%d \n",sizeof(arr2)/sizeof(arr2[0]));
    printf("arr3 数组长度=%d \n",sizeof(arr3)/sizeof(arr3[0]));
    
    system("pause");
    return 0;
}
