#include <stdio.h>
#include <stdlib.h>
#define INT_SCANF(x) scanf("%d", &x) /* ����������scanf�궨�� */ 
#define FLT_SCANF(x) scanf("%f", &x)/* ����ʵ����scanf�궨�� */

int main(void)
{
    int x;
    float y;

    printf("����������x��");
    INT_SCANF(x);
    printf("������ʵ��y��");
    FLT_SCANF(y);
    printf("����x = %d\n", x);
    printf("ʵ��y = %.2f\n", y);
    
    system("pause");
    return 0;
}
