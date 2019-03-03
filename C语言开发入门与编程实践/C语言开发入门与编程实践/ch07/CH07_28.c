#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);  /* 交换两数 */
void QuickSort(int*, int, int);  /* 快速排序法 */

int main()
{
    int num[] = { 23, 24, 56, 16, 4, 12, 46, 5, 45, 51 };
    int i;
    int length = sizeof(num)/sizeof(int);

    puts( "排序前：" );
    for ( i = 0; i < 10; i++ )
        printf( "%d ", num[i] );

    QuickSort(num, 0, length-1); /* 快速排序法 */

    puts( "\n排序后：" );
    for ( i = 0; i < 10; i++ )
        printf( "%d ", num[i] );
    printf("\n");
    system("pause");
    return 0;
}
/* 自变量：交换i、j的值 */
/* 返回值：无         */
void swap(int *i, int *j)
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

/* 自变量：arr却排序之数组   */
/*       Lflag 数组左边界 */
/*       Rflag 数组右边界 */
void QuickSort(int *arr, int Lflag, int Rflag)
{
    int left;
    int i, j, k;
    int temp;

    i = Lflag;
    j = Rflag + 1;
    if (i < j)
    {
        do
        {
            /* 向右走访数组 */
            do
            {
                i++;
            } while (arr[i] <= arr[Lflag] && i <= Rflag );
            /* 向左走访数组 */
            do
            {
                j--;
            } while (arr[j] >= arr[Lflag] && j > Lflag );
            /* 交换停驻点的值 */
            if ( i < j )
                swap(&arr[i], &arr[j]);
        } while( i < j );
        /* 交换左边界与索引 j 元素的值 */
        swap(&arr[Lflag], &arr[j]);
        /* 排序左边数组 */
        QuickSort(arr, Lflag, j-1);
        /* 排序右边数组 */
        QuickSort(arr, j+1, Rflag);
    }
}
