#include<stdio.h>
#include<stdlib.h>
/*各数组函数原型的声明*/
void print_arr(int arr[],int);
void swap(int *i, int *j);
void BubbleSort(int *arr, int length);

int main()
{	
	/*声明并初始化成绩数组*/
	int score_arr[]={78,69,83,90,75,54,71,45,67};
	printf("成绩数组的元素:\n");
 	/*调用函数*/
    print_arr(score_arr,9);
    printf("--------------------------------------\n");
    BubbleSort(score_arr,9);
    printf("排序后成绩数组的元素:\n");
	print_arr(score_arr, 9);
	
    system("pause");
 	return 0;	
}
/*输出数组各元素的函数*/
void print_arr(int arr[],int size)
{	
	int i;
	for(i=0; i<size; i++)
	 	printf("%d  ",arr[i]);
	printf("\n");
}
/*将成绩数组中的成绩算出平均*/

void swap(int *i, int *j) /* 交换两数的值 */ 
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}
void BubbleSort(int *arr, int length)/* 冒泡排序法 */ 
{
    int i, j;
    for ( i = 0; i < length; i++ )
    {
        for ( j = 0; j < length-1; j++ )
        {
            if ( arr[j] > arr[j+1] )
                swap(&arr[j], &arr[j+1]);
        }
    }
}
