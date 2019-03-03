#include<stdio.h>
void main()
{
	float r1,r2,
	float r3;
	printf("Please input your resistances:");
	scanf("%f%f",&r1,&r2);
	r3=float((r1*r2)/(r1+r2));
	printf("%f\n",r3);
}
