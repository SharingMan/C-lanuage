#include <stdio.h>
#include <stdlib.h>

void strCat(char*, char*);/* 字符串串接函数的原型声明 */ 

int main(void)
{
    char str1[80], str2[80]; 
    printf("输入字符串1：");
    scanf("%s", str1);
    printf("输入字符串2：");
    scanf("%s", str2);
    
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    strCat(str1, str2);/* 传值调用 */
    printf("-----------------------------------\n");
    printf("串接后的 str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    
    system("pause");
    return 0;
}

void strCat(char* str1, char* str2)
{
    int i, j;
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++)
        str1[i+j] = str2[j];/* 串接字符串 */ 
    str1[i+j] = '\0';
}
