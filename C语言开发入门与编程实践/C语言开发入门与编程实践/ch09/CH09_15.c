#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int score;
};
typedef struct student snd;    /* ����������������Ϊsdn */

void sort(snd*);    /* ���ɼ��������� */

int main()
{
    snd s[5] = {{"Justin", 90},
                {"momor",  93},
                {"Becky",  94},
                {"bush",   85},
                {"Snoopy", 90}};
    int i;

    puts("����ǰ��");
    for(i = 0; i < 5; i++)
         printf("������%s\t�ɼ���%d\n", s[i].name, s[i].score);

    sort(s);

    puts("�����");
    for(i = 0; i < 5; i++)
         printf("������%s\t�ɼ���%d\n", s[i].name, s[i].score);

    system("pause");
    return 0;
}

/* �Ա�����fs Ϊ�ṹ���� */
/* ����ֵ����         */

void sort(snd* fs)
{
    int i, j;
    snd temp;

    for(j = 5; j > 0; j--)
        for(i = 0; i < j - 1; i++)
            if( fs[i].score < fs[i+1].score)
            {
                temp = fs[i+1];   /* ���ƽṹ���� */
                fs[i+1] = fs[i];
                fs[i] = temp;
            }
}
