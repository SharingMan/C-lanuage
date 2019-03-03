#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    time_t start,end;
    
    start=time(NULL);/* 记录开始的时间 */ 
    printf("请输入任意键:"); 
    getch();
    end=time(NULL);/* 记录结束的时间 */ 
    
    printf("\n所经过频率数=：%d  每秒滴答数=%d 所经过秒数=%d \n", clock(),CLK_TCK,clock()/CLK_TCK);
    /* clock()函数的使用 */ 
    printf("end-start的执行时间:%.2f \n",difftime(end,start)); /* 求时间差 */ 
    
    system("pause");
    return 0;
}
