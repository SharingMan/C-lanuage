#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score1=78,score2=69,score3=92;
	int sum=0;
	
 	sum=score1+score2+score3;
 	printf("总分为: %d\n",sum);
 	printf("原来的平均成绩为: %d\n",sum/3);/*不转换数据类型*/
 	/*强制转换数据类型*/
 	printf("强制转换后的平均成绩为: %f\n",(float)sum/3);
 	
    system("pause");
    return 0;
}
