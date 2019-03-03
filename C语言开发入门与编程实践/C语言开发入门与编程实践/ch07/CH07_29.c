#include <stdio.h>
#include <stdlib.h>
#define SIZE 6  /*定义数组大小*/
        
void inser (int *);     /*声明插入排序法函数*/
void showdata (int *);  /*声明打印数组函数*/
void inputarr (int *,int);  /*声明输入数组函数*/
int main(void)
{ 
	int data[SIZE];
	printf("请输入6个准备排序的数值:\n");
    printf("--------------------------------------------------------------\n"); 
	inputarr(data,SIZE);     /*把数组名及数组大小传给函数*/
	printf("--------------------------------------------------------------\n");
    printf("您输入的原始数组是:");
    showdata (data);
    printf("-------------------------------------------------------------\n");
	inser(data);
	system("pause");
	return 0;
}

void inputarr(int data[],int size)
{
	int i;
	for (i=0;i<size;i++)      /*利用循环输入数组数据*/
	{ 
		printf("请输入第 %d 个元素：",i+1);
		scanf("%d",&data[i]);
	}
}
void showdata(int data[])
{  
	int i;
	for (i=0;i<SIZE;i++)
		printf("%d\t",data[i]);   /*打印数组数据*/
	printf("\n");
}
void inser(int data[])
{  
	int i;     /*i为扫描次数*/
	int j;     /*以j来定位比较的元素*/
	int tmp;   /*tmp用来暂存资料*/
	for (i=1;i<SIZE;i++)  /*扫描循环次数为SIZE-1*/
	{  
		tmp=data[i];
        j=i-1;
	    while (j>=0 && tmp<data[j])  /*如果第二元素小于第一元素*/
		{							 
			data[j+1]=data[j];		/*就把所有元素往后推一个位置*/		
			j--;
		}
		data[j+1]=tmp;              /*最小的元素放到第一位*/	
		printf("第 %d 次扫瞄：\t",i);
		showdata(data);
	}
}
