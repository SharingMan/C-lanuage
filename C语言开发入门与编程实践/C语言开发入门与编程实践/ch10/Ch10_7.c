#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char name[20],no[10];
    int score;
    
    FILE *fptr;

    if((fptr = fopen("Student.txt", "r")) == NULL)
        printf("�ļ���ʧ��");
    else
    {
        printf("ѧ��\t����\t�ɼ���\n");
        printf("-------------------------------------\n");
        for(i=0;i<2;i++)/* ��ȡ�������� */ 
        {
        fscanf(fptr, "%s\t%s\t%d",no, name, &score);
        /* ���ø�ʽ����ȡ������ѧ�����ݶ��� */ 
        printf("%s\t%s\t%d\n",no,name,score);
        }
        fclose(fptr);/* �ر��ļ� */ 
    }

    system("pause");
    return 0;
}
