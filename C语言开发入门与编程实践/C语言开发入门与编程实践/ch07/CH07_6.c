#include <stdio.h>
#include <stdlib.h>
/* ������ĺ��������\ʾ����ֵ���� */
void CallByValue(int x)
{
    x = 30;
}

/* ������ĺ��������\ʾ����ַ���� */
void CallByAddress(int *x)
{
    *x = 30;
}
void CallMix(int x,int *y)
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    printf( "��ֵ����ǰ��%d\n", x );
    CallByValue(x);/* ���ô�ֵ���� */ 
    printf( "��ֵ���ú�%d\n", x );
    printf("-------------------------------------------\n");
    printf( "��ַ����ǰ��%d\n", x );
    CallByAddress(&x);/* ���ô�ַ���� */ 
    printf( "��ַ���ú�%d\n", x );
    printf("-------------------------------------------\n");
     printf( "����͵���ǰ��%d %d\n", x ,y);
    CallMix(x,&y);
    printf( "����͵��ú�%d %d\n", x ,y);
    
    system("pause");
    return 0;
}
