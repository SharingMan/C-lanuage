/* 强制类型转换练习 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100, j=3;                                    /* 定义整数变量 i 与 j */
	float Result;                                      /* 定义浮点数变量 Result */

    printf("自动类型转换的执行结果\n");
	Result=i/j;                                        /* 自动类型转换 */
	printf("Result=i/j=%d/%d=%f\n", i, j, Result);
	printf("-----------------------------------------\n");    
	printf("强制类型转换的执行结果\n");
    Result=(float) i / j;                      /* 强制类型转换 */
    printf("Result=(float)i/(float)j=%d/%d=%f\n", i, j, Result);
    printf("-----------------------------------------\n");   
    
    system("pause");
    return 0;  
}
