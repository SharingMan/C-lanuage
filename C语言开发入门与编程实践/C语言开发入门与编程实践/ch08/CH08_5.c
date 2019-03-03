#include<stdio.h>
#include<stdlib.h>

#define RESULT(r1,r2,h) ((((r1)+(r2))*(h))/2.0)/*声明宏函数 */

int main()
{	
	int r1,r2,h;
		
	/*输入梯形的各数值*/
	printf("上底=",&r1);
	scanf("%d",&r1);
	printf("下底=",&r2);
 	scanf("%d",&r2);
 	printf("高=",&h);
 	scanf("%d",&h);
 	/*利用宏函数*/
 	printf("梯形面积=%f\n",RESULT(r1,r2,h));
 	printf("每个参数+2后的");
    printf("梯形面积=%f\n",RESULT(r1+2,r2+2,h+2));
    
    system("pause");
    return 0;	
}
