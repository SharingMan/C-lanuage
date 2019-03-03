#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;

    printf("请输入您的体重(公斤):");
    scanf("%f", &weight);/* 输入体重 */ 
    printf("您在月球上体重为：%.2f 公斤\n", weight * 0.17);

    system("pause");
    return 0;
}
