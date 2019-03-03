#include<stdio.h>
#include<stdlib.h> /*引入随机数函数的头文件*/

int main()
{	
	int i;
	printf("===rand()随机数函数===\n");
	printf("产生的随机数:\n");
	for(i=0; i<5; i++)
	{		
  		printf("%d  ",rand());
	}
	printf("\n");
	
    system("pause");
 	return 0;
}
