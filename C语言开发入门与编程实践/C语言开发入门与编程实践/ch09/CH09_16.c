#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* 包含字符串处理函数 */ 

int push(char*, int);    /* 压入堆栈数据 */
int pop();           /* 取出堆栈数据 */
int show();          /* 显示堆栈数据 */

struct student
{
    char name[20];
    int score;
    struct student *next;
};
typedef struct student s_data;
s_data *top = NULL;

int main()
{
    int select, score;
    char name[20];

    do
    {
        printf("(1)存入 (2)取出 (3)访问 (4)离开 => ");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                printf("姓名 成绩：");
                scanf("%s %d", name, &score);
                push(name, score);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
        }
    } while (select != 4);
    
    system("pause");
    return 0;
}

int push(char* name, int score)/* 存入新元素 */
{
    s_data *new_data;

    new_data = (s_data*) malloc(sizeof(s_data));    /* 配置空间给新元素 */
    strcpy(new_data->name, name);    /* 设定新元素的数据内容 */
    new_data->score = score;
    new_data->next = top;    /* 将新元素的next指向原堆栈顶端 */
    top = new_data;    /* 设定新元素为堆栈顶端 */
}

int pop() /* 取出新元素 */
{
    s_data *freeme;

    if(top != NULL)   /* 如果堆栈不为空 */
    {
        printf("姓名：%s\t成绩：%d......取出\n", top->name, top->score);
        freeme = top;   /* 设定freeme指标，待会要释放它所指向的位置 */
        top = top->next;    /* 设定新堆栈顶端 */
        free(freeme);    /* 释放freeme指向的内存空间 */
    }
    else
        printf("堆栈已空！\n");
}

int show()/* 访问堆栈数组 */
{
    s_data *ptr;
    ptr = top;
    if (ptr == NULL)    /* 如果指向空地址，表示堆栈为空 */
        printf("堆栈已空\n");
    else
    {
        while (ptr != NULL)    /* 由上往下访问堆栈 */
        {
            printf("姓名：%s\t成绩：%d\n", ptr->name, ptr->score);
            ptr = ptr->next;
        }
    }
}
