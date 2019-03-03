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
    seed=time(NULL);/*��ϵͳʱ�䵱�����������*/ 
    srand(seed);
    
    for(i = 0; i < N; i++)
    {
        x = rand();
        y = rand();
        x /= 32767;
        y /= 32767;
        if((pow(x,2)+pow(y,2)) <= 1)
            sum++;/* ����1/4Բ�ڵĵ��� */ 
    }
    printf("PI = %.5f\n", (float)sum/N*4);/* ��ӡ��PIֵ */ 

    system("pause");
    return 0;
}
