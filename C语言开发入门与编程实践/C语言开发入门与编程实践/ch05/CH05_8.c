#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[40];                 /* 定义字符数组 Str_1[40] */
	char Str_2[40];                 /* 定义字符数组 Str_2[40] */
	int count;
    
    printf("字符串 Str_1 的内容:");
    gets(Str_1);
	printf("字符串 Str_2 的内容:");
	gets(Str_2);
	
	for (count=0; Str_1[count] != '\0' && Str_2[count] != '\0'; count++)
	     if ( Str_1[count] == Str_2[count] )
			 continue;                           /* 相等则继续比较下一个字符 */
		 else
			 break;                               /* 不相等即跳出循环的执行 */
		
	if ( Str_1[count] == '\0' && Str_2[count] == '\0' ) /* 判断两个字符串是否都比较到结尾字符 */
		printf("2个字符串相等...");                     /* 显示结果 */
	else
		printf("2个字符串不相等...");                   /* 显示结果 */

	printf("\n"); 
     
     system("pause");                                    
     return 0;
     
}
