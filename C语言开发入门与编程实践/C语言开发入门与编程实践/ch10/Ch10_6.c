#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char name[20],no[10];
    int score;
    
    FILE *fptr;

    if((fptr = fopen("Student.txt", "w")) == NULL)
        printf("�ļ���ʧ��");
    else
    {
        for(i=0;i<2;i++)/* ���벢д���������� */ 
        {
        printf("����ѧ�š�������ɼ���\n");
        scanf("%s%s%d", no, name, &score);
        fprintf(fptr, "%s\t%s\t%d\n",no, name, score);
        /* ���ø�ʽ��д�뺯����ѧ������д���ļ� */ 
        }
        fclose(fptr);/* �ر��ļ� */ 
    }

    system("pause");
    return 0;
}
