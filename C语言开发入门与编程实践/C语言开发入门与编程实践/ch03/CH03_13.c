#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;

    printf("��������������(����):");
    scanf("%f", &weight);/* �������� */ 
    printf("��������������Ϊ��%.2f ����\n", weight * 0.17);

    system("pause");
    return 0;
}
