#include<stdio.h>
void main()
{

	int x ;
	int n;
	int z1;
	int z2;
	printf("Please input your money:\n");
	scanf("%d", &x);
	n = x / 5;
	z1 = n / 20 * 5;
	z2 = (n - n / 20 * 20) / 5;
	printf("%d", n+z1+z2);


}