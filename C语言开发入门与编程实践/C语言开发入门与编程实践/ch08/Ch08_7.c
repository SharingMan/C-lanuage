#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main()
{
#ifdef TRUE /* ���� TRUE�Ѷ��� */
    printf("TRUE�Ѷ����ˣ�����ֵΪ1\n");
#endif

#ifndef FALSE/* ���� FALSEδ���� */
    printf("FALSEδ���壬��������ڳ���0\n");
    #define FALSE 0
#endif
    printf("TRUE = %d  FALSE = %d\n",TRUE,FALSE);

    system("pause");
    return 0;
}
