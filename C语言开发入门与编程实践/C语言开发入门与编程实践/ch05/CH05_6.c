#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;/*用作计算字符串的长度*/
	char str[30];
	char str1[30];
	printf("请输入字符串:");
	/*输入字符串*/
	gets(str);
	printf("输入的字符串为:%s\n",str);
	/*利用for循环计算i,并将输入的字符串复制到str1字符串*/
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];/* 逐一字符拷贝 */ 
    }
    str1[i]='\0';/* 在计算字符串长度时，并不包含字符串结尾字符'\0' */
 	printf("此字符串有%d个字符\n",i);
 	printf("原字符串str=%s\n",str);
	printf("复制后字符串str1=%s\n",str1);
 	
    system("pause");
    return 0;
}
