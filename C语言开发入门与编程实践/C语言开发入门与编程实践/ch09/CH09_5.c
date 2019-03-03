#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int score;
    };/* 声明student 结构 */ 
    struct student class1[5] = { {"Justin", 90},
                                 {"momor",  95},
                                 {"Becky",  98},
                                 {"Bush",   75},
                                 {"Snoopy", 80} };/* 设定5个成员的初始值 */
    int i;
    printf("----------打印student结构数组的成员------------\n");
    for(i = 0; i < 5; i++)
        printf("姓名：%s\t成绩：%d\n", class1[i].name, class1[i].score);
     /* 打印student结构数组的成员元素 */ 
    printf("---------使用指标常数来存取student结构成员---------\n");
     for(i = 0; i < 5; i++)	   
     printf("姓名：%s\t成绩：%d\n", (class1+i)->name, (class1+i)->score);
     /* 可以使用指针的观念来存取student结构成员*/ 
    system("pause");
    return 0;
}
