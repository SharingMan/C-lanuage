#include <stdio.h>
#include <stdlib.h>

int main()
{
     float sigma=0;//���������ʼֵ,�����ڷ�dev C++�ı������ϻ���ִ���;
    int n, k;

    printf("������kֵ��");
    scanf("%d", &k);/* ����kֵ */ 
    for(n = 0; n <= k; n++)
    {
        if(n & 1)/* ���n������ */ 
            sigma += (float)-1/(2*n+1);
        else/* ���n��ż�� */ 
            sigma += (float)1/(2*n+1);
    } /* if else ָ���Ӧ�� */ 
    printf("PI = %f\n", sigma*4);

    system("pause");
    return 0;
}
