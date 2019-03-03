#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=255;         /* 整数变数 */
    
    int *piVal,*piVal1; /* 声明两个整数类型的指针变量 */ 
    piVal= &value;   /* 指向value 变量地址 */
    piVal1=piVal; /* piVal1指向piVal的地址 */ 
     
    printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    *piVal=300; /* 重新设定piVal指针变量的数据内容 */ 
     printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    *piVal1=500; /* 重新设定piVal1指针变量的数据内容 */ 
     printf("value = %d,*piVal=%d,*piVal1=%d\n",value,*piVal,*piVal1);
    
    system("pause");      
    return 0;
}
