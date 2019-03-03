#include<stdio.h>
void main()
{
	int score,x;

	printf("Please input your scores:");
	scanf("%d",&score);

	x=score/10;

	switch(x)
	{
	case 10:
	case 9:printf("Your level of score is A \n");break;
	case 8:printf("Your level of score is B \n");break;
	case 7:printf("Your level of score is C \n");break;
	case 6:printf("Your level of score is D \n");break;
	default:printf("Your level of score is E \n");break;
	}
}
