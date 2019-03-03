#include <stdio.h>
#include <stdlib.h> 

void print_word1(char*);  /* ����ԭ������ */
void print_word2(char*);  /* ����ԭ������ */

int main()
{
    void (*ptr)(char*);  /* ����ָ������ */

    ptr = print_word1;  /* ��print_word1���ڴ��ַָ����ptr ����ָ��*/
    ptr("hello");       /* ʹ��ptr()ִ��print_word1 ()�Ĺ��� */
    printf("------------------------------------\n");
    ptr = print_word2;  /* ��print_word2���ڴ��ַָ����ptr ����ָ��*/
    ptr("Good bye!");       /* ʹ��ptr()ִ��print_word2()�Ĺ��� */

    system("pause");
    return 0;
}

void print_word1 (char* str)
{
    puts("����print_word1����"); 
    puts(str);
}

void print_word2(char *str)
{
    puts("����print_word2����");
    puts(str);
}
