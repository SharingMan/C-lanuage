#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char name[20],no[10];
    int score;
    
    FILE *fptr;

    if((fptr = fopen("Student.txt", "w")) == NULL)
        printf("文件打开失败");
    else
    {
        for(i=0;i<2;i++)/* 输入并写入两笔数据 */ 
        {
        printf("输入学号、姓名与成绩：\n");
        scanf("%s%s%d", no, name, &score);
        fprintf(fptr, "%s\t%s\t%d\n",no, name, score);
        /* 利用格式化写入函数将学生数据写入文件 */ 
        }
        fclose(fptr);/* 关闭文件 */ 
    }

    system("pause");
    return 0;
}
