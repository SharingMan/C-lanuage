#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *local,*gmt;/* ����local�ṹ���� */ 
    now = time(NULL);/* ȡ��ϵͳĿǰʱ�� */ 
    
    printf("%d ��\n",now);
    printf("����ʱ��:ctime():%s", ctime(&now));/*תΪһ��ʱ���ʽ */ 
    local = localtime(&now);
    printf("����ʱ��:asctime():%s", asctime(local));/*תΪһ��ʱ���ʽ */
    gmt = gmtime(&now);/*ȡ�ø�������ʱ�� */ 
    printf("��������ʱ�䣺%s", asctime(gmt));

    system("pause");
    return 0;
}
