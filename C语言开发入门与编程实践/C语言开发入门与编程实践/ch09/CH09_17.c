#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(char*, int);    /* 置入队列数据 */
int get();           /* 取出队列数据 */
int show();          /* 显示队列数据 */

struct student
{
    char name[20];
    int score;
    struct student *next;
};
typedef struct student s_data;

s_data *front =NULL;
s_data *rear = NULL;

int main()
{
    int select, score;
    char name[20];

    do
    {
        printf("(1)存入 (2)取出 (3)显示 (4)离开 => ");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                printf("姓名 成绩：");
                scanf("%s %d", name, &score);
                add(name, score);
                break;
            case 2:
                get();
                break;
            case 3:
                show();
                break;
        }
    } while (select != 4);

    system("pause");
    return 0;
}


int add(char* name, int score)
{
    s_data *new_data;

    new_data = (s_data*) malloc(sizeof(s_data));  /* 配置内存给新元素 */
    strcpy(new_data->name, name);   /* 设定新元素的数据 */
    new_data->score = score;
    if (rear == NULL)      /* 如果rear为NULL，表示这是第一个元素 */
        front = new_data;
    else
        rear->next = new_data;    /* 将新元素连接至队列尾端 */

    rear = new_data;    /* 将rear指向新元素，这是新的队列尾端 */
    new_data->next = NULL;    /* 新元素之后无其他元素 */
}


int get()
{
    s_data *freeme;
    if (front == NULL)
        puts("队列已空！");
    else
    {
        printf("姓名：%s\t成绩：%d ....取出\n", front->name, front->score);
        freeme = front;    /* 设定将要释放的元素指针 */
        front = front->next;    /* 将队列前端移到下一个元素 */
        free(freeme);    /* 释放所取出的元素的内存 */
    }
}

int show()
{
    s_data *ptr;
    ptr = front;
    if (ptr == NULL)
        puts("队列已空！");
    else
    {
    puts("front -> rear");
        while (ptr != NULL)    /* 由front往rear访问队列 */
        {
            printf("姓名：%s\t成绩：%d\n", ptr->name, ptr->score);
            ptr = ptr->next;
        }
    }
}
