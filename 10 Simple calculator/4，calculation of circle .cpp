#include<stdio.h>
void main()
{
	float r,h,c,s,v;
	printf("Please input r & h:");
	scanf("%f%f",&r,&h);
	c=2*3.1415926*r*h;
	s=2*3.1415926*r*r+2*r*3.1415926*h;
	v=3.1415926*r*r*h;
	printf("C=%0.1f	S=%0.1f	V=%0.1f",c,s,v);
}

