#include<stdio.h>
void main()
{
	int a,b;
	float c,s;
	printf("please input the length and width :\n");
	scanf("%d%d",&a,&b);

	c=float(2*(a+b));
	s=float(a*b);
	printf("%9.2f\n",s);
	printf("%2.2f\n",c);

}


