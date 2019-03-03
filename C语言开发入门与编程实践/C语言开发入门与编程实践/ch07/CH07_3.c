#include<stdio.h>
#include<stdlib.h>

/*函数原型声明*/
int area(int,int);
void draw_rect(int,int);

int main()
{	
	int w, h,rect_area;
    /*函数调用*/
	/*设定输入宽与长的数字*/
	printf("请输入宽:");
	scanf("%d",&w);
	printf("请输入长:");
	scanf("%d",&h);
	rect_area=area(w,h);/* 需要返回值的函数调用 */ 
	/*函数调用*/
	printf("长方形的面绩=%d\n",rect_area); 
    draw_rect(w,h);/* 不需要返回值的函数调用 */
    
    system("pause");
	return 0;
}
int area(int a,int b)
{
 return a*b;
}/* 计算长方形面绩的函数 */ 
void draw_rect(int x,int y)
{   
	int i,j;
	/*设定数字不得为小于等于零*/
	if(x<=0 || y<=0)
	{ 
		printf("数字不可小于等于零\n");
		return ;
	}
	/*设定输出的格式*/
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		printf("*");
		}
		printf("\n");
	}
} /* 画出长方形图形的函数 */
