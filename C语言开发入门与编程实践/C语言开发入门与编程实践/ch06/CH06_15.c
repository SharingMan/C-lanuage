#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* piVal=(int*)malloc(sizeof(int));/* 将指针指向动态配置内存空间 */
    
    printf("请输入piVal的值 =");
    scanf("%d",piVal);/* 输入piVal的值 */ 
    printf("\n");
    printf("piVal 所指向的地址为 %p\n",piVal);
    printf("piVal 所指向的地址内容为 %d\n\n",*piVal);
    
    printf("释放 piVal 所指向的内存空间..\n\n");
    free(piVal);/* 将指针piVal的空间释放 */ 
    
    printf("piVal 所指向的地址为 %p\n",piVal);
    printf("piVal 所指向的地址内容为%d\n\n",*piVal);  
    
    system("pause");  
    return 0;
}
