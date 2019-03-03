#include<stdio.h>
#include <stdlib.h>
int main()
{	
	/*声明字符变量*/
	char ch=042;/*双引号的八进位ASCII码*/ 
	/*打印出字符和它的ASCII码*/
	printf("打印出八进位042所代表的字符符号= %c\n",ch); 
 	printf("双引号的应用->%c荣钦科技%c\n",ch,ch); /*双引号的应用*/ 
    printf("%c",'\a');
    system("pause");
    return 0;
}
