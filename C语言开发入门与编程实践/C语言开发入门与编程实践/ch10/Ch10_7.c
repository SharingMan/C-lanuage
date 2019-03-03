#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char name[20],no[10];
    int score;
    
    FILE *fptr;

    if((fptr = fopen("Student.txt", "r")) == NULL)
        printf("文件打开失败");
    else
    {
        printf("学号\t姓名\t成绩：\n");
        printf("-------------------------------------\n");
        for(i=0;i<2;i++)/* 读取两笔数据 */ 
        {
        fscanf(fptr, "%s\t%s\t%d",no, name, &score);
        /* 利用格式化读取函数将学生数据读出 */ 
        printf("%s\t%s\t%d\n",no,name,score);
        }
        fclose(fptr);/* 关闭文件 */ 
    }

    system("pause");
    return 0;
}
