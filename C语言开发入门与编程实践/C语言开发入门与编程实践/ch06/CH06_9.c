#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iArrVal[3]={10,20,30};/* 声明数组并指定初值 */
    int* piVal=iArrVal;  /* 声明指针变量，并将指针指向数组起始 */
    int i;
    
    for(i=0;i<sizeof(iArrVal)/sizeof(iArrVal[0]);i++)
    {
        printf("数组数据的打印  iArrVal[%d] 值为 %d\n",i,iArrVal[i]);  
        printf("利用指针打印数组数据 *(piVal+%d) 值为%d\n",i,*(piVal+i)); 
        printf("----------------------------------------------------\n");    
    }
    
    printf("\n");
    system("pause");
    return 0;
}
