#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50};
    double arr2[] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
    char arr3[] = { 'A', 'B', 'C', 'D', 'E'};
    int i;

    puts("int����              double����           char����");
    puts("------------------------------------------------------");
    for ( i = 0; i < 5; i++ )
    {
        printf( "arr1+%d = %p   ", i, arr1+i );/* ��ӡ��arr1+i�ĵ�ַ */ 
        printf( "arr2+%d = %p   ", i, arr2+i );/* ��ӡ��arr2+i�ĵ�ַ */ 
        printf( "arr3+%d = %p   \n", i, arr3+i );/* ��ӡ��arr3+i�ĵ�ַ */ 
    }
    printf("arr1 ���鳤��=%d \n",sizeof(arr1)/sizeof(arr1[0]));
    printf("arr2 ���鳤��=%d \n",sizeof(arr2)/sizeof(arr2[0]));
    printf("arr3 ���鳤��=%d \n",sizeof(arr3)/sizeof(arr3[0]));
    
    system("pause");
    return 0;
}
