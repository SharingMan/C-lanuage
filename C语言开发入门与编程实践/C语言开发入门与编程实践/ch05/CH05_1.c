#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Score[5];                       /* ������������ Score[5] */
     int count, Total_Score=0,average=0;                     

     for (count=0; count < 5; count++)  /* ִ�� for ѭ����ȡѧ���ɼ�*/
     {
         printf("����� %d λѧ���ķ���:", count+1);
         scanf("%d", &Score[count]);     /* ������ķ���д������ */
         Total_Score+=Score[count];    /* �������ж�ȡ���������ܺ� */
     }
     
     average=Total_Score/5;    /* ����ƽ������ */ 
     printf("\n");                    /* ���� */
     printf("5λѧ�����ܷ�:%d\n", Total_Score); /* ����ɼ��ܺ� */
     printf("5λѧ����ƽ��:%d\n", average); /* ����ɼ�ƽ�� */
     
     system("pause");
     return 0;
}
