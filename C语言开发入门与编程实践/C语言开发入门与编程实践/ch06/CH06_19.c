#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr[3];
    int arr[3][3] = {{11, 32, 23},
                     {64, 75, 36},
                     {57, 18, 99}};
    int i, j;

    for(i = 0; i < 3; i++)
        ptr[i] = (int*)(arr+i);/* 指向一维数组的地址 */ 

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d  ", *(*(ptr+i)+j));/* 以双重指针表示 */ 
    
    putchar('\n'); /* 换行  */ 
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d  ", ptr[i][j]);
    printf("\n");
    system("pause");
    return 0;
}
