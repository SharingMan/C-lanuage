#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max = 0, input, i;

    printf("����׼���������ֵĸ�����");
    scanf("%d", &num);
    if(num < 0)/* if .. else ָ�� */ 
        puts("�������0");
    else
    {
        for(i = 0; i < num; i++)
    {
            printf(">");
            scanf("%d", &input);
            if(max < input)
            max = input;
        } /* ����forѭ����������Ѱ�����ֵ */ 
        printf("���ֵ��%d\n", max);
    }
    system("pause");
    return 0;
}
