#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 1000000

int main()
{
    float x, y;
    int i, sum = 0;
    long int seed;
    seed=time(NULL);/*以系统时间当做随机数种子*/ 
    srand(seed);
    
    for(i = 0; i < N; i++)
    {
        x = rand();
        y = rand();
        x /= 32767;
        y /= 32767;
        if((pow(x,2)+pow(y,2)) <= 1)
            sum++;/* 计算1/4圆内的点数 */ 
    }
    printf("PI = %.5f\n", (float)sum/N*4);/* 打印出PI值 */ 

    system("pause");
    return 0;
}
