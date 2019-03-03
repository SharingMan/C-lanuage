#include<stdio.h>
#include<stdlib.h>/*引入随机数函数的头文件*/
#include<time.h>/*引入时间函数的头文件*/  

int main()
{	
	int i;
	long int seed;
	printf("===srand()随机数函数===\n");
	printf("产生的随机数:\n");
	
    seed=time(NULL);/*以系统时间当作随机数种子*/
	srand(seed);
	
    for(i=0; i<5; i++)
	{		
  		printf("%d  ",rand());
	}
	printf("\n");
	
    system("pause");
 	return 0;
}
