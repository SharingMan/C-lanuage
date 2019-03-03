#include<stdio.h>
void main()
{
	int h,term,price;
	printf("Plese input The hours of Week :\n");
	scanf("%d",&h);
	if(h<40)
	{
		term=h*20;
		printf("The price is %d.",term);

	}
	else
	{
		term=40*20+(h-40)*30;
		printf("\nThe price is %d.\n",term);
	}
}
