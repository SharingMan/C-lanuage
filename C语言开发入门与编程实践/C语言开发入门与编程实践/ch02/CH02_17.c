/* ǿ������ת����ϰ */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100, j=3;                                    /* ������������ i �� j */
	float Result;                                      /* ���帡�������� Result */

    printf("�Զ�����ת����ִ�н��\n");
	Result=i/j;                                        /* �Զ�����ת�� */
	printf("Result=i/j=%d/%d=%f\n", i, j, Result);
	printf("-----------------------------------------\n");    
	printf("ǿ������ת����ִ�н��\n");
    Result=(float) i / j;                      /* ǿ������ת�� */
    printf("Result=(float)i/(float)j=%d/%d=%f\n", i, j, Result);
    printf("-----------------------------------------\n");   
    
    system("pause");
    return 0;  
}
