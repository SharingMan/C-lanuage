#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("************ 九九表打印结果 ***************\n\n"); 
	
   for (a=1;a<=9;a++)			/* 外层for循环控制a输出 */
	{
		for (b=1;b<=9;b++)		/* 内层for循环控制b输出 */
		{
			printf("%dx%d=%d\t",b,a,a*b);
		}
		printf("\n");           /* 当外圈跑1次,内圈已跑9次 */
	}
	system("pause");
	return 0;
}
