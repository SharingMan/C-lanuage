#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12} };/*������ά���� arr */
    int i, j;

 for (i = 0; i < 4; i++ )
  for ( j = 0; j < 3; j++ )
        {
 printf( "arr[%d][%d] = %d\t", i, j, arr[i][j] );/*��ӡarr[i][j]���� */ 
 printf( "*(arr+%d)+%d = %p\t", i, j, *(arr+i)+j );/* ��ӡarr[i][j]�ĵ�ַ*/ 
 printf( "*(*(arr+%d)+%d) = %d\n", i, j, *(*(arr+i)+j) );/*��ӡarr[i][j]Ԫ��ֵ*/ 
        }

    system("pause");
    return 0;
}
