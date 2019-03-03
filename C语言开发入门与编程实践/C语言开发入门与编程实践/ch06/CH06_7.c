#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = { 10, 20, 30, 40, 50};
    int i;

    for ( i = 0; i < 5; i++ )
     printf( "arr[%d] = %d  *(arr+%d)=%d *(&arr[%d])=%d \n",   i,arr[i],i,*(arr+i),i,*(&arr[i]) );
    /* 数组与指针的替代运算 */ 
    system("pause");
    return 0;
}
