#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int score;
    };/* ����student �ṹ */ 
    struct student class1[5] = { {"Justin", 90},
                                 {"momor",  95},
                                 {"Becky",  98},
                                 {"Bush",   75},
                                 {"Snoopy", 80} };/* �趨5����Ա�ĳ�ʼֵ */
    int i;
    printf("----------��ӡstudent�ṹ����ĳ�Ա------------\n");
    for(i = 0; i < 5; i++)
        printf("������%s\t�ɼ���%d\n", class1[i].name, class1[i].score);
     /* ��ӡstudent�ṹ����ĳ�ԱԪ�� */ 
    printf("---------ʹ��ָ�곣������ȡstudent�ṹ��Ա---------\n");
     for(i = 0; i < 5; i++)	   
     printf("������%s\t�ɼ���%d\n", (class1+i)->name, (class1+i)->score);
     /* ����ʹ��ָ��Ĺ�������ȡstudent�ṹ��Ա*/ 
    system("pause");
    return 0;
}
