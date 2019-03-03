#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int n,sum=1,i=1; /* 声明变量与设定起始值*/ 
    printf("请输入到第几阶层:");
    scanf("%d",&n); /* 输入n值*/ 
    while(i<=n)
    {
        sum=i*sum;/* 控制循环的条件式*/ 
        printf("\ni=%d",i); 
        printf("\t%d!=%d",i,sum);
        i++; /* 执行循环一次则加一 */ 
    }
    printf("\n");
    system("pause");
    return 0; 
}
