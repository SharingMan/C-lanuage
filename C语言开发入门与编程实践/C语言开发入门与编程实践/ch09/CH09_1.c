#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int score;
    } s1, s2; /* �ṹ���͵������붨��*/

    printf("ѧ������=");
    scanf("%s",&s1.name);/* ����s1�ṹ������name��Ա */ 
    printf("ѧ���ɼ�=");
    scanf("%d",&s1.score);/* ����s1�ṹ������score��Ա */ 
    s2 = s1; /* �ṹ�������ָ������ */ 
    printf("s1.name = %s\n", s1.name);
    printf("s1.score = %d\n", s1.score);
    printf("s2.name = %s\n", s2.name);
    printf("s2.score = %d\n", s1.score);

    system("pause");
    return 0;
}
