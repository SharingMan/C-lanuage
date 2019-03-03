#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int score;
    } s1, s2; /* 结构类型的声明与定义*/

    printf("学生姓名=");
    scanf("%s",&s1.name);/* 输入s1结构变量的name成员 */ 
    printf("学生成绩=");
    scanf("%d",&s1.score);/* 输入s1结构变量的score成员 */ 
    s2 = s1; /* 结构变量间的指定运算 */ 
    printf("s1.name = %s\n", s1.name);
    printf("s1.score = %d\n", s1.score);
    printf("s2.name = %s\n", s2.name);
    printf("s2.score = %d\n", s1.score);

    system("pause");
    return 0;
}
