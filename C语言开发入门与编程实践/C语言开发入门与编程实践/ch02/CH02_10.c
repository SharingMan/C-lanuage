#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=13,b=57;
	
	/* 输出a与b的二进制表示法 */
	printf("a=13,二进制为00001101\n");
	printf("b=57,二进制为00111001\n");
	printf("位操作符运算范例-----\n\n"); 
	/*位操作符运算关系*/ 
    printf("%d & %d = %d\n",a,b,a&b);
	printf("%d | %d = %d\n",a,b,a|b);
	printf("%d ^ %d = %d\n",a,b,a^b);
	printf("~%d = %d\n",b,~b);
	printf("%d >> 2 = %d\n",a,a>>2);
	printf("%d << 2 = %d\n",a,a<<2);
    system("pause");  
    return 0;
}
