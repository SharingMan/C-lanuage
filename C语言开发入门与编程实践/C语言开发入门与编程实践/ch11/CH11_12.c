#include <stdio.h>
#include <stdlib.h>
#include <string.h>      /* 包含 <string.h> 头文件 */

int main()
{
	/* 定义字符数组 Work_Str[80] */
	char Work_Str[80]="His school is there. His family is near school."; 
	
    printf("原始字符串内容:");
    puts(Work_Str);
    printf("\n");                                           /* 换行 */
    puts("把His替换成Her  ...");
	printf("\n");                                           /* 换行 */

    while ( strstr(Work_Str, "His") )                       /* 使用 strstr() 函数搜寻字符串 */
	 	strncpy( strstr(Work_Str, "His"), "Her", 3 );       /* 使用 strncpy() 函数替换字符串 */
	
	
	printf("字符串替换之后:");
	puts(Work_Str);                                         /* 显示结果 */
		
	printf("\n");                                           /* 换行 */
    
    system("pause");
    return 0;
}
