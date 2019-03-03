#include <stdio.h>
int main()
{
    int iChioce;
    do
    {
        printf("*  1. 吃饭\n");
        printf("*  2. 睡觉\n");
        printf("*  3. 打豆豆\n");
        printf("*  0. 退出\n");
        printf("*  请选择（0-3）：");
        scanf("%d", &iChioce);
        //选择后的处理
        if (iChioce==1)
            printf("我吃吃吃...\n");
        else if (iChioce==2)
            printf("我睡觉觉...\n");
        else if (iChioce==3)
            printf("我打打打...\n");
        else if (iChioce==0)
            break;
        else
        {
            printf("\007选择错误！\n");
            continue;
        }
        printf("恭喜你完成了一项工作！\n");
    }
    while(1);
    return 0;
}