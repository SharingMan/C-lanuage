#include <stdio.h>
#include <stdlib.h>

struct product
{
    char name[20];
    int price;
    int number;
};  /* ��ȫ����Χ�������� */
int calculate(struct product);
/* ��ֵ���õ�ԭ������ */ 

int main()
{
    struct product book;
    
    printf("����:");
    gets(book.name);
    printf("����:");
    scanf("%d",&book.price);
    printf("����:");
    scanf("%d",&book.number);
    printf("-----------------------------------------\n");
    printf("���� : %s\n", book.name);
    printf("���� = %d\t", book.price);
    printf("���� = %d\n", book.number);
    printf("������� = %d\n",calculate(book)); /* ����ʱ��ֱ�ӽ��ṹ�������ݸ��������� */   
    
    system("pause");
    return 0;
}
int calculate(struct product inbook)
{
    int money;
    money = inbook.price*inbook.number;/* ���㶩����� */ 
    return money;
}
