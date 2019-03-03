#include <stdio.h>
#include <stdlib.h>

struct product
{
    char name[20];
    int price;
    int number;
};  /* 在全局域范围内作声明 */
int calculate(struct product);
/* 传值调用的原型声明 */ 

int main()
{
    struct product book;
    
    printf("书名:");
    gets(book.name);
    printf("单价:");
    scanf("%d",&book.price);
    printf("数量:");
    scanf("%d",&book.number);
    printf("-----------------------------------------\n");
    printf("书名 : %s\n", book.name);
    printf("单价 = %d\t", book.price);
    printf("数量 = %d\n", book.number);
    printf("订购金额 = %d\n",calculate(book)); /* 调用时，直接将结构变量传递给函数即可 */   
    
    system("pause");
    return 0;
}
int calculate(struct product inbook)
{
    int money;
    money = inbook.price*inbook.number;/* 计算订购金额 */ 
    return money;
}
