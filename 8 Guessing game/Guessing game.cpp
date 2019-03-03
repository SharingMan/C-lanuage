#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int a,b,c;
	b=0;c=0;
	srand(time(0));
	b=rand()%100+1;

	printf("Hi,Host,I have thought a number,You can guess it\n");

	
	do
	{
		printf("please input your guessing number:\n");
		scanf("%d",&a);
		c++;

		if(a>b)
		{
			printf("your a is bigger than b\n");
	
		}
		if(a<b)
		{
			printf("your a is small than b\n");
		}


	}while(a!=b);
		printf("After %d times,it is bingo\n",c);
}

