#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int score;
    };
    struct student s1[5] = { {"Justin", 90},
                             {"omor",  95},
                             {"Becky",  98},
                             {"Bush",   75},
                             {"Snoopy", 80} };/* �趨5����Ա�ĳ�ʼֵ */ 
    struct student *s2[5];/* �����ɽṹָ������ */ 
    int i;
    
    for(i = 0; i < 5; i++)
        s2[i] = &s1[i];/* ���ƽṹ��Ա */
     
    for(i = 0; i < 5; i++)
    {
        printf("������%s \t", s2[i]->name);
        printf("�ɼ���%d \n", s2[i]->score);
    }/* ��ʾ�ṹ��Ա */

    system("pause");
    return 0;
}
