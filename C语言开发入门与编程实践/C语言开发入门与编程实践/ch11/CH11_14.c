#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number[44]; /* 存放随机数的数组 */ 
    int i, j, tmp;

    srand(time(NULL));
    for(i = 0; i < 44; i++)
        number[i] = i;
    for(i = 1; i < 44; i++)
    {
        j = rand() % 42 + 1;
        tmp = number[i];
        number[i] = number[j];
        number[j] = tmp;
    }/* 产生43个随机数 */ 
    printf("开奖号码：");
    for(i = 1; i < 7; i++)
        printf("%3d", number[i]);
    printf("\n特别号码：%3d\n", number[7]);/* 特别号码 */ 

    system("pause");
    return 0;
}
