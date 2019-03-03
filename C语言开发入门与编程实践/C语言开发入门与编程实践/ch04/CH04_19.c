#include <stdio.h>
#include <stdlib.h>

int main()
{
     float sigma=0;//建议给出初始值,否则在非dev C++的编译器上会出现错误;
    int n, k;

    printf("请输入k值：");
    scanf("%d", &k);/* 输入k值 */ 
    for(n = 0; n <= k; n++)
    {
        if(n & 1)/* 如果n是奇数 */ 
            sigma += (float)-1/(2*n+1);
        else/* 如果n是偶数 */ 
            sigma += (float)1/(2*n+1);
    } /* if else 指令的应用 */ 
    printf("PI = %f\n", sigma*4);

    system("pause");
    return 0;
}
