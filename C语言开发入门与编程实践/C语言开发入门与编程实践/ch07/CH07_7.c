#include<stdio.h>
#include<stdlib.h>
/*�����麯��ԭ�͵�����*/
void print_arr(int arr[],int);
void swap(int *i, int *j);
void BubbleSort(int *arr, int length);

int main()
{	
	/*��������ʼ���ɼ�����*/
	int score_arr[]={78,69,83,90,75,54,71,45,67};
	printf("�ɼ������Ԫ��:\n");
 	/*���ú���*/
    print_arr(score_arr,9);
    printf("--------------------------------------\n");
    BubbleSort(score_arr,9);
    printf("�����ɼ������Ԫ��:\n");
	print_arr(score_arr, 9);
	
    system("pause");
 	return 0;	
}
/*��������Ԫ�صĺ���*/
void print_arr(int arr[],int size)
{	
	int i;
	for(i=0; i<size; i++)
	 	printf("%d  ",arr[i]);
	printf("\n");
}
/*���ɼ������еĳɼ����ƽ��*/

void swap(int *i, int *j) /* ����������ֵ */ 
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}
void BubbleSort(int *arr, int length)/* ð������ */ 
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
