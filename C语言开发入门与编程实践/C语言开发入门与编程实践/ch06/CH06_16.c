#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int iNum;
    int i,j; 
    int* piRand=0; /* 声明指针变量值 ,并指向0 */
    
    printf("请输入欲产生的随机数值数量:");
    scanf("%d",&iNum);/* 输入此数组的动态大小 */ 
    piRand=(int*)malloc(iNum*sizeof(int));/* 将指针指向动态配置内存空间 */

    for(i=0;i<iNum;i++)
    {
        piRand[i]=rand();/* 利用随机数函数设定值给piRand数组 */ 
    }
     
    for(i=0;i<iNum;i++)
    {
        printf("%d\t",piRand[i]);/* 以数组方式打印出piRand动态数组的值 */ 
    }
    for(i=0;i<iNum;i++)
    {
        printf("%d\t",*(piRand+i));/* 以指针方式打印出piRand动态数组的值 */ 
    }
    printf("\n");
    free(piRand); /* 释放指针指向的内存空间 */
    
    system("pause");
    return 0;
}
