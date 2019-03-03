#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=11,b=15;
	int c=a>b;
	int d=a==b;
	int e=a!=b;
	
	/*比较与逻辑操作符的交互运算关系*/ 
	printf("a=%d,b=%d\n",a,b);
    printf("c=a>b, c=%d\n",c);
    printf("d=a==b, d=%d\n",d);
    printf("e=a!=b, e=%d\n",e);
    printf("c && d = %d\n",c&&d);
    printf("c || d = %d\n",c||d);
    printf("c || !e = %d\n",c||!e);
    system("pause");  
    return 0;
}
