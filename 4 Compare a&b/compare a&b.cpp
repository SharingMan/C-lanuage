#include<stdio.h>
void main()
{
	int a,b,max;
	printf("please input a,b:\n");
	scanf("%d %d",&a,&b);

	max=b;
	if(a>b)
	{
		max=a;
	}

	printf("%d",max);
}