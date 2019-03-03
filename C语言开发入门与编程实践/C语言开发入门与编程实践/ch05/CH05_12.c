#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[80], str2[80];
    int i, j, same = 1;

    printf("字符串1：");
    scanf("%s", str1);
    printf("字符串2：");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0'; i++);/* 计算 str1 字符串长度 */ 
    for(j = 0; str2[j] != '\0'; j++);/* 计算 str2 字符串长度 */
    if(i != j)
        same = 0; /* 两字符串不相等 */ 
    else
        for(i = 0; str1[i] = '\0'; i++)
            if(str1[i] != str2[i])
                same = 0;/* 两字符串不相等 */ 
    if(same)
        printf("字符串1等于字符串2\n");
    else
        printf("字符串不等于字符串2\n");
    
    system("pause");
    return 0;
}
