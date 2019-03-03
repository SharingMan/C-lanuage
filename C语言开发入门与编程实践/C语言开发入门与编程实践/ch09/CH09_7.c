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
                             {"Snoopy", 80} };/* 设定5个成员的初始值 */ 
    struct student *s2[5];/* 声明成结构指针数组 */ 
    int i;
    
    for(i = 0; i < 5; i++)
        s2[i] = &s1[i];/* 复制结构成员 */
     
    for(i = 0; i < 5; i++)
    {
        printf("姓名：%s \t", s2[i]->name);
        printf("成绩：%d \n", s2[i]->score);
    }/* 显示结构成员 */

    system("pause");
    return 0;
}
