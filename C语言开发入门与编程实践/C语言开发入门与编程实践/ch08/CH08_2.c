#include<stdio.h>
#include<stdlib.h>

/*定义各种宏名称*/
#define PI 3.14159
#define SHOW "圆面积=" 
#define  RESULT r*r*PI

int main(void)
{	
	int r;
	
    printf("请输入圆半径:");
 	scanf("%d",&r);
    printf(SHOW"%f\n",RESULT);
    #undef PI /*解除宏定义*/
     system("pause");
     return 0;	
}
