#include <stdio.h>
int main()
{
    int iChioce;
    do
    {
        printf("*  1. �Է�\n");
        printf("*  2. ˯��\n");
        printf("*  3. �򶹶�\n");
        printf("*  0. �˳�\n");
        printf("*  ��ѡ��0-3����");
        scanf("%d", &iChioce);
        //ѡ���Ĵ���
        if (iChioce==1)
            printf("�ҳԳԳ�...\n");
        else if (iChioce==2)
            printf("��˯����...\n");
        else if (iChioce==3)
            printf("�Ҵ���...\n");
        else if (iChioce==0)
            break;
        else
        {
            printf("\007ѡ�����\n");
            continue;
        }
        printf("��ϲ�������һ�����\n");
    }
    while(1);
    return 0;
}