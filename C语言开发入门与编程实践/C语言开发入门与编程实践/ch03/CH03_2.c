#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* �����趨Ϊ4,��ӡ���� */ 
    printf("%4d\n",123);
    printf("%*d\n",4,123);
    /* �����趨Ϊ4,��ӡ�ַ��� */ 
    printf("%*s\n",4,"***");
    printf("%4s\n","***");
    /* �����趨Ϊ5,��ӡ�ַ��� */ 
    printf("%*s\n",5,"===");
    printf("%5s\n","===");
    system("pause");
    return 0;
}
