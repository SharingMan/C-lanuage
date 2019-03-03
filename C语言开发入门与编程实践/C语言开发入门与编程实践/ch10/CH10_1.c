#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pf;        /*建立文件变量指针*/
    pf = fopen("test.txt", "r");
    /* 打开文件test.txt以供读取 */ 
    if(pf!=NULL) /* 判断文件是否打开成功 */
        {
        printf("OK!文件打开\n");
        fclose(pf);/* 关闭数据流 */
        }
    else
        printf("FAIL!文件打开失败\n");
               
    system("pause");
    return 0;
}
