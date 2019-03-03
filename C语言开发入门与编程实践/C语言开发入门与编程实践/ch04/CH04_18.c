#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max = 0, input, i;

    printf("请问准备输入数字的个数：");
    scanf("%d", &num);
    if(num < 0)/* if .. else 指令 */ 
        puts("必须大于0");
    else
    {
        for(i = 0; i < num; i++)
    {
            printf(">");
            scanf("%d", &input);
            if(max < input)
            max = input;
        } /* 利用for循环来输入与寻找最大值 */ 
        printf("最大值：%d\n", max);
    }
    system("pause");
    return 0;
}
