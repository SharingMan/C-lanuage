/*逻辑操作符练习*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=5,c=7;      /*声明a、b及c三个整数变量，并指定初始值*/

	printf("a<b && b<c || c<a = %d\n",a<b && b<c || c<a); 
    /* 先计算「a<b && b<c」，然后再将结果与「c<a」进行OR的运算 */  
	printf("!a<b && b<!c || c<a = %d\n",!a<b && b<!c || c<a);
     
	system("pause");
    return 0;
}
