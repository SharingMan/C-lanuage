#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int score;
};
typedef struct student snd;    /* 定义数据类型名称为sdn */

void sort(snd*);    /* 依成绩进行排序 */

int main()
{
    snd s[5] = {{"Justin", 90},
                {"momor",  93},
                {"Becky",  94},
                {"bush",   85},
                {"Snoopy", 90}};
    int i;

    puts("排序前：");
    for(i = 0; i < 5; i++)
         printf("姓名：%s\t成绩：%d\n", s[i].name, s[i].score);

    sort(s);

    puts("排序后：");
    for(i = 0; i < 5; i++)
         printf("姓名：%s\t成绩：%d\n", s[i].name, s[i].score);

    system("pause");
    return 0;
}

/* 自变量：fs 为结构数组 */
/* 返回值：无         */

void sort(snd* fs)
{
    int i, j;
    snd temp;

    for(j = 5; j > 0; j--)
        for(i = 0; i < j - 1; i++)
            if( fs[i].score < fs[i+1].score)
            {
                temp = fs[i+1];   /* 复制结构对象 */
                fs[i+1] = fs[i];
                fs[i] = temp;
            }
}
