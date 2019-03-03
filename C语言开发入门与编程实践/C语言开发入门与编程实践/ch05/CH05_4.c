#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Str_1[]={ 'W', 'o', 'r', 'l', 'd', '!'};          /* 定义字符数组 Str_1[] */
	char Str_2[]="World!";                                  /* 定义字符数组 Str_2[] */
	
    printf("Str_1 占用的内存空间: %d\n", sizeof(Str_1));  /* 显示 Str_1 占用的内存空间 */
	printf("字符数组 Str_1 的内容: %s", Str_1);             /* 显示 Str_1 的内容 */
	printf("\n");                                           /* 换行 */
	printf("Str_2 占用的内存空间: %d\n", sizeof(Str_2));  /* 显示 Str_2 占用的内存空间 */
	printf("字符数组 Str_2 的内容: %s", Str_2);             /* 显示 Str_2 的内容 */
	printf("\n");                                           /* 换行 */
    system("pause");
    return 0;
}
