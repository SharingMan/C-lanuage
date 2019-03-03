#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, month, day;

    printf("请输入日期(YYYY-MM-DD)：");
    scanf("%d %d%d", &year, &month, &day);/* 输入目前日期 */ 
    printf("日期：%d-%d-%d\n", year, month, day);
    
    system("pause");
    return 0;
}
