#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int  score[3];
    }; /* 声明student 结构 */ 
    struct student class1[5] = { {"Justin", 90,76,54},
                                 {"momor",  95,88,54},
                                 {"Becky",  98,66,90},
                                 {"Bush",   75,54,100},
                                 {"Snoopy", 80,88,97} };/* 设定5个成员的初始值 */
    int i;
    
    for(i = 0; i < 5; i++)
     {
          printf("姓名：%s\t成绩：%d %d %d\n", class1[i].name, class1[i].score[0],class1[i].score[1],class1[i].score[2]);
         /* 打印与存取student结构数组的数组成员元素 */ 
           printf("-----------------------------------------------\n");
           }
           
    system("pause");
    return 0;
}
