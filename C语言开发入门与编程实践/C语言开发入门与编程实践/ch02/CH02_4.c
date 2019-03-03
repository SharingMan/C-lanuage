#include<stdio.h>
#include <stdlib.h>

int main()
{	
	/*声明字符变量*/
	char char1='A';
	/*打印出字符和它的ASCII码*/
 	printf("大写字符= %c 的 ASCII码=%d\n",char1,char1);
 	char char2=char1+32; /* 字符的运算功能 */
   	printf("小写字符= %c 的 ASCII码= %d\n",char2,char2); 
     /* 打印出运算后的字符和ASCII码 */  
    
    system("pause");
    return 0;
}
