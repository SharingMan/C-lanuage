#include<stdio.h>
void main()
{

	int x,n;
	printf("Please input a number£º");
	scanf("%d",&x);

	n=0;

	x=x/10;
	n++;

	while(x>0)
	{
		n++;
		x=x/10;
	}

	printf("This number is %d figures\n",n);
}
