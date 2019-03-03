#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[40];                     
	char Str_2[40];                    
	char Str_3[80];                                  
	int count, s_record;
    
    printf("字符串 Str_1 的内容:");
    gets(Str_1);                                   
	printf("字符串 Str_2 的内容:");
	gets(Str_2);                               

	s_record=0;     /* 把整数变量 s_record 归 0，用来记录 Str_3 所指的数组元素 */

    for (count=0; Str_1[count] != '\0'; count++, s_record++)  /* 将 Str_1 字符串复制到 Str_3 */
		Str_3[s_record]=Str_1[count];

	for (count=0; Str_2[count] != '\0'; count++, s_record++)  /* 将 Str_2 字符串复制到 Str_3 */
		Str_3[s_record]=Str_2[count];

	Str_3[s_record]='\0';                                     /* 字符串最后要加上 NULL 字符 */

    printf("连结后的字符串 Str_3:%s", Str_3);                   /* 显示字符串连结的结果 */
	printf("\n");   /* 换行 */
    
    system("pause");   
    return 0;                                       
}
