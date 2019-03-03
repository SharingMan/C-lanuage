#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);  /* �������� */
void QuickSort(int*, int, int);  /* �������� */

int main()
{
    int num[] = { 23, 24, 56, 16, 4, 12, 46, 5, 45, 51 };
    int i;
    int length = sizeof(num)/sizeof(int);

    puts( "����ǰ��" );
    for ( i = 0; i < 10; i++ )
        printf( "%d ", num[i] );

    QuickSort(num, 0, length-1); /* �������� */

    puts( "\n�����" );
    for ( i = 0; i < 10; i++ )
        printf( "%d ", num[i] );
    printf("\n");
    system("pause");
    return 0;
}
/* �Ա���������i��j��ֵ */
/* ����ֵ����         */
void swap(int *i, int *j)
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

/* �Ա�����arrȴ����֮����   */
/*       Lflag ������߽� */
/*       Rflag �����ұ߽� */
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
            /* �����߷����� */
            do
            {
                i++;
            } while (arr[i] <= arr[Lflag] && i <= Rflag );
            /* �����߷����� */
            do
            {
                j--;
            } while (arr[j] >= arr[Lflag] && j > Lflag );
            /* ����ͣפ���ֵ */
            if ( i < j )
                swap(&arr[i], &arr[j]);
        } while( i < j );
        /* ������߽������� j Ԫ�ص�ֵ */
        swap(&arr[Lflag], &arr[j]);
        /* ����������� */
        QuickSort(arr, Lflag, j-1);
        /* �����ұ����� */
        QuickSort(arr, j+1, Rflag);
    }
}
