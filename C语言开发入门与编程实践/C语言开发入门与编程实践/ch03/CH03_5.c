#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int iVal; 
    float fVal,fVal1;
    printf("请输入一个字符:");
    scanf("%c",&c);/* 输入字符 */ 
    printf("您所输入的字符ASCII值为:%d\n",c);
    printf("---------------------------------\n");
    printf("请输入八进制数字:");
    scanf("%o",&iVal);/*输入八进制整数*/ 
    printf("转换为十进制数:%d\n",iVal);
    /* 利用格式化字符转换为十进制数字 */
    printf("---------------------------------\n");
    printf("请输入两个实数:"); 
    scanf("%f,%f",&fVal,&fVal1);/* 输入两个浮点数*/
    /* 利用格式化字符转换为科学计数法 */
    printf("转换为科学计数法\n第一个数为:%e\n",fVal);
    printf("第二个数为:%e\n",fVal1);
    printf("---------------------------------\n");
    system("pause");
    return 0;
}
