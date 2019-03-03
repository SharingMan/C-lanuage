#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iVal=123;/* 声明iVal整数值 */ 
    
    /* 标志设定字符示范 */
    printf("%d 的 6d 格式输出结果=%6d\n",iVal,iVal);
    printf("%d 的+6d 格式输出结果=%+6d\n",iVal,iVal);
    printf("%d 的-6d 格式输出结果=%-6d\n",iVal,iVal);
    printf("%d 的+#6o格式输出结果=%+#6o\n",iVal,iVal);
    printf("%d 的06d 格式输出结果=%06d\n\n",iVal,iVal);
    
    system("pause");
    return 0;
}
