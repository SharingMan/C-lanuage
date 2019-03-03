#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* �����ַ��������� */ 

int push(char*, int);    /* ѹ���ջ���� */
int pop();           /* ȡ����ջ���� */
int show();          /* ��ʾ��ջ���� */

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
        printf("(1)���� (2)ȡ�� (3)���� (4)�뿪 => ");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                printf("���� �ɼ���");
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

int push(char* name, int score)/* ������Ԫ�� */
{
    s_data *new_data;

    new_data = (s_data*) malloc(sizeof(s_data));    /* ���ÿռ����Ԫ�� */
    strcpy(new_data->name, name);    /* �趨��Ԫ�ص��������� */
    new_data->score = score;
    new_data->next = top;    /* ����Ԫ�ص�nextָ��ԭ��ջ���� */
    top = new_data;    /* �趨��Ԫ��Ϊ��ջ���� */
}

int pop() /* ȡ����Ԫ�� */
{
    s_data *freeme;

    if(top != NULL)   /* �����ջ��Ϊ�� */
    {
        printf("������%s\t�ɼ���%d......ȡ��\n", top->name, top->score);
        freeme = top;   /* �趨freemeָ�꣬����Ҫ�ͷ�����ָ���λ�� */
        top = top->next;    /* �趨�¶�ջ���� */
        free(freeme);    /* �ͷ�freemeָ����ڴ�ռ� */
    }
    else
        printf("��ջ�ѿգ�\n");
}

int show()/* ���ʶ�ջ���� */
{
    s_data *ptr;
    ptr = top;
    if (ptr == NULL)    /* ���ָ��յ�ַ����ʾ��ջΪ�� */
        printf("��ջ�ѿ�\n");
    else
    {
        while (ptr != NULL)    /* �������·��ʶ�ջ */
        {
            printf("������%s\t�ɼ���%d\n", ptr->name, ptr->score);
            ptr = ptr->next;
        }
    }
}
