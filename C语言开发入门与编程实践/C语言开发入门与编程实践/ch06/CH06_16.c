#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int iNum;
    int i,j; 
    int* piRand=0; /* ����ָ�����ֵ ,��ָ��0 */
    
    printf("�������������������ֵ����:");
    scanf("%d",&iNum);/* ���������Ķ�̬��С */ 
    piRand=(int*)malloc(iNum*sizeof(int));/* ��ָ��ָ��̬�����ڴ�ռ� */

    for(i=0;i<iNum;i++)
    {
        piRand[i]=rand();/* ��������������趨ֵ��piRand���� */ 
    }
     
    for(i=0;i<iNum;i++)
    {
        printf("%d\t",piRand[i]);/* �����鷽ʽ��ӡ��piRand��̬�����ֵ */ 
    }
    for(i=0;i<iNum;i++)
    {
        printf("%d\t",*(piRand+i));/* ��ָ�뷽ʽ��ӡ��piRand��̬�����ֵ */ 
    }
    printf("\n");
    free(piRand); /* �ͷ�ָ��ָ����ڴ�ռ� */
    
    system("pause");
    return 0;
}
