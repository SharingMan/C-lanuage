//* 位操作符练习 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bit_test=12;          /* 定义整数变量 (0001100) */
	int bit_test1=7;/* 定义整数变量 (00000111) */
	printf("bit_test= %d bit_test1= %d\n",bit_test,bit_test1);
	printf("----------------------------------------------\n");
	/* 执行 AND,OR,XOR 位运算 */ 
	printf("执行 AND 运算的结果:%d\n", bit_test & bit_test1);
    printf("执行 OR  运算的结果:%d\n", bit_test |bit_test1 );
	printf("执行 XOR 运算的结果:%d\n", bit_test ^ bit_test1);
	
	system("pause");
	return 0;
}
