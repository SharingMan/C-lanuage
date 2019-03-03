#include<stdio.h>
void compare (int a,int b,int c)//±È½Ïº¯Êı
{
	int term;
	if(a>b)
		term=a;
	
	else
		term=b;

	if(term<c)
		printf("The max number is:%d\n",c);
	else
		printf("The max number is:%d\n",term);
}

	void main()
	{
	int a,b,c,term;
	printf("Plese input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	compare(a,b,c);
	}
