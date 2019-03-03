#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *local,*gmt;/* 声明local结构变量 */ 
    now = time(NULL);/* 取得系统目前时间 */ 
    
    printf("%d 秒\n",now);
    printf("现在时间:ctime():%s", ctime(&now));/*转为一般时间格式 */ 
    local = localtime(&now);
    printf("本地时间:asctime():%s", asctime(local));/*转为一般时间格式 */
    gmt = gmtime(&now);/*取得格林威治时间 */ 
    printf("格林威治时间：%s", asctime(gmt));

    system("pause");
    return 0;
}
