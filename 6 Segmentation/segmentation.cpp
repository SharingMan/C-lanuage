#include<stdio.h>
void main()
{
	int x,y;
	printf("please input x:\n");
	scanf("%d",&x);

	if(x<0)
	{
		y=-1;
	}

	else 
		if(x==0)
	{
		y=0;
	}

	else
	{
		y=1;
	}
	printf("Output y=%d\n",y);
}
