#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    time_t start,end;
    
    start=time(NULL);/* ��¼��ʼ��ʱ�� */ 
    printf("�����������:"); 
    getch();
    end=time(NULL);/* ��¼������ʱ�� */ 
    
    printf("\n������Ƶ����=��%d  ÿ��δ���=%d ����������=%d \n", clock(),CLK_TCK,clock()/CLK_TCK);
    /* clock()������ʹ�� */ 
    printf("end-start��ִ��ʱ��:%.2f \n",difftime(end,start)); /* ��ʱ��� */ 
    
    system("pause");
    return 0;
}
