#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int n,sum=1,i=1; /* �����������趨��ʼֵ*/ 
    printf("�����뵽�ڼ��ײ�:");
    scanf("%d",&n); /* ����nֵ*/ 
    while(i<=n)
    {
        sum=i*sum;/* ����ѭ��������ʽ*/ 
        printf("\ni=%d",i); 
        printf("\t%d!=%d",i,sum);
        i++; /* ִ��ѭ��һ�����һ */ 
    }
    printf("\n");
    system("pause");
    return 0; 
}
