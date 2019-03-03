#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s[4][30]={ "Hello","Peter","How are you ?","Kevin" };
    char** ppcArrVal=(char**)malloc(4*sizeof(char*));
    /* 配置一个字符类型的指针数组变量，并将数组起始值传给ppiArrVal指针变量 */ 
    for(i=0;i<4;i++)
    {
    ppcArrVal[i]=(char*)malloc(sizeof(s[i]));
    /* 分别配置第一维所对应第二维长度,依据s[i]中字符串的长度 */
    ppcArrVal[i]=s[i];
    }
                  

    for(i=0;i<4;i++)
    {
        int iCount=0;
        while(ppcArrVal[i][iCount++]!='\0');/* 计算字符串的长度 */ 
        
        printf("ppcArrVal[%d] 的长度为 %d",i,iCount);
        printf("  内容为 %s\n",ppcArrVal[i]);
    }                  

    for(i=0;i<4;i++)
    {
        free(ppcArrVal[i]);/* 释放指针指向的第二维数组内存空间 */
    }    
   
     free(ppcArrVal);       /* 释放指针指向的第一维数组内存空间 */
    
    system("pause");
    return 0;
}
