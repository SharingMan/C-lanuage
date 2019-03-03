#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h=10,day=0;	
	do                                  /*do-while循环开始*/
   {                                 
		day++;                          /*天数计算*/
		if(h-=2)                        /*每执行一次循环高度减少2公尺(h=h-2)*/
			h++;                        /*加回1公尺(h=h+1)*/
   } while(h>0);                         /*循环成立的条件为高度大于0*/
   printf("需要 %d 天\n", day);         /*打印出天数*/
   
   system("pause");
   return 0;
}
