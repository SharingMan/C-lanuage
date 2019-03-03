#include <stdio.h>
#include <string.h>      /* 包含 <string.h> 头文件 */
#include <stdlib.h>

int main()
{
	char Work_Str[80];                    /* 定义字符数组 Work_Str[80] */
	char Str_1[40];                       /* 定义字符数组 Str_1[40] */
	char Str_2[40];                       /* 定义字符数组 Str_2[40] */
	
    printf("比较下列2个字符串:\n");
    printf("请输入第一个字符串:\n"); 
    gets(Str_1);
    printf("Str_1=%s\n", Str_1);
    printf("请输入第二个字符串:\n"); 
    gets(Str_2);
    printf("Str_2=%s\n", Str_2);
	printf("\n");                               /* 换行 */

    /* 比较字符串的大小 */
	if ( strcmp(Str_1, Str_2) )                    /* 使用 strcmp() 函数比较字符串 */
		if ( strcmp(Str_1, Str_2) > 0 )                     /* Str_1 字符串 > Str_2 字符串 */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " > ");                        /* 连结 ">" 符号 */
			strcat(Work_Str, Str_2);
		}
		else                             /* Str_1 字符串 < Str_2 字符串 */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " < ");                        /* 连结 "<" 符号 */
			strcat(Work_Str, Str_2);
		}
	else                                          /* Str_1 字符串 = Str_2 字符串 */
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " = ");                   /* 连结 "=" 符号 */
			strcat(Work_Str, Str_2);
		}

	printf("比较的结果:");
	puts(Work_Str);                                 /* 显示结果 */
		
	printf("\n");                                    /* 换行 */
 
    system("pause");
    return 0;
}
