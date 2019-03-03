#include <stdio.h>
#include <stdlib.h> 

void print_word1(char*);  /* 函数原型声明 */
void print_word2(char*);  /* 函数原型声明 */

int main()
{
    void (*ptr)(char*);  /* 函数指针声明 */

    ptr = print_word1;  /* 将print_word1的内存地址指定给ptr 函数指针*/
    ptr("hello");       /* 使用ptr()执行print_word1 ()的功能 */
    printf("------------------------------------\n");
    ptr = print_word2;  /* 将print_word2的内存地址指定给ptr 函数指针*/
    ptr("Good bye!");       /* 使用ptr()执行print_word2()的功能 */

    system("pause");
    return 0;
}

void print_word1 (char* str)
{
    puts("这是print_word1函数"); 
    puts(str);
}

void print_word2(char *str)
{
    puts("这是print_word2函数");
    puts(str);
}
