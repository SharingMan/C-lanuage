#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	
    a=5;
    printf("a= %d \n",a);
	b=++a;
	printf("前缀自增操作符:b=++a\n a=%d,b=%d\n",a,b);
	/* 前缀自增操作符*/
	printf("--------------------------------------------\n");
    a=5;
    printf("a= %d \n",a);
	b=a++;
	printf("后缀自增操作符:b=a++\n a=%d,b=%d\n",a,b);
    /* 后缀自增操作符*/
    printf("--------------------------------------------\n");
    a=5;
    printf("a= %d \n",a);
	b=--a;
	printf("前缀自减操作符:b=--a\n a=%d,b=%d\n",a,b);
	/* 前缀自减操作符*/
    printf("--------------------------------------------\n");
    a=5;
    printf("a= %d \n",a);
	b=a--;
	printf("后缀自减操作符:b=a-- \na=%d,b=%d\n",a,b);
	/* 后缀自减操作符*/
    printf("--------------------------------------------\n");
    system("pause");  
    return 0;
}
