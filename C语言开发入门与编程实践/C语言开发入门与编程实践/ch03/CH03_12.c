#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, month, day;

    printf("����������(YYYY-MM-DD)��");
    scanf("%d %d%d", &year, &month, &day);/* ����Ŀǰ���� */ 
    printf("���ڣ�%d-%d-%d\n", year, month, day);
    
    system("pause");
    return 0;
}
