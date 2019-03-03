#include <stdio.h>
#include <stdlib.h>		

int main()
{
	char select;
	puts("(A) 意大利");
	puts("(B) 巴黎");
	puts("(C) 日本");
	printf("请输入您要旅游的地点：");
	scanf("%c", &select);	                          /*输入字符并存入变量select*/
    
	switch(select)
	{
	case 'a':  
	case 'A':                                         /*如果select等于'A'或'a'*/
		puts("★意大利5日游 $35000");                 /*则显示文字*/
		break;                                        /*跳出switch*/
	case 'b': 
	case 'B':                                         /*如果select等于'B'或'b'*/
		puts("★巴黎7日游 $40000");                   /*则显示文字*/
		break;                                        /*跳出switch*/
	case 'c':  
	case 'C':                                         /*如果select等于'C'或'c'*/
		puts("★日本5日游 $25000");                   /*则显示文字*/
		break;                                        /*跳出switch*/
	default:                                          /*如果select不等于ABC或abc任何一个*/
		printf("选项错误\n");                        
	}
	system("pause");
    return 0;	
}
