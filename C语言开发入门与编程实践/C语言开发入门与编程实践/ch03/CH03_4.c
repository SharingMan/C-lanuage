#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iVal=123;/* ����iVal����ֵ */ 
    
    /* ��־�趨�ַ�ʾ�� */
    printf("%d �� 6d ��ʽ������=%6d\n",iVal,iVal);
    printf("%d ��+6d ��ʽ������=%+6d\n",iVal,iVal);
    printf("%d ��-6d ��ʽ������=%-6d\n",iVal,iVal);
    printf("%d ��+#6o��ʽ������=%+#6o\n",iVal,iVal);
    printf("%d ��06d ��ʽ������=%06d\n\n",iVal,iVal);
    
    system("pause");
    return 0;
}
