#include<stdio.h>
#include<stdlib.h>

/*����ԭ������*/
int area(int,int);
void draw_rect(int,int);

int main()
{	
	int w, h,rect_area;
    /*��������*/
	/*�趨������볤������*/
	printf("�������:");
	scanf("%d",&w);
	printf("�����볤:");
	scanf("%d",&h);
	rect_area=area(w,h);/* ��Ҫ����ֵ�ĺ������� */ 
	/*��������*/
	printf("�����ε��漨=%d\n",rect_area); 
    draw_rect(w,h);/* ����Ҫ����ֵ�ĺ������� */
    
    system("pause");
	return 0;
}
int area(int a,int b)
{
 return a*b;
}/* ���㳤�����漨�ĺ��� */ 
void draw_rect(int x,int y)
{   
	int i,j;
	/*�趨���ֲ���ΪС�ڵ�����*/
	if(x<=0 || y<=0)
	{ 
		printf("���ֲ���С�ڵ�����\n");
		return ;
	}
	/*�趨����ĸ�ʽ*/
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		printf("*");
		}
		printf("\n");
	}
} /* ����������ͼ�εĺ��� */
