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
        ptr[i] = (int*)(arr+i);/* ָ��һά����ĵ�ַ */ 

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d  ", *(*(ptr+i)+j));/* ��˫��ָ���ʾ */ 
    
    putchar('\n'); /* ����  */ 
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d  ", ptr[i][j]);
    printf("\n");
    system("pause");
    return 0;
}
