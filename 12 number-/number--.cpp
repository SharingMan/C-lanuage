#include<stdio.h>
void main()
{

int a,b,c,d;

printf("Please input a��b��\n");
scanf("%d%d",&a,&b);

if (a>b)
{
d=a;
printf("%d\n",d-b);
}

else
{
d=b;
printf("%d\n",d-a);
}
}
