#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iArrVal[3]={10,20,30};/* �������鲢ָ����ֵ */
    int* piVal=iArrVal;  /* ����ָ�����������ָ��ָ��������ʼ */
    int i;
    
    for(i=0;i<sizeof(iArrVal)/sizeof(iArrVal[0]);i++)
    {
        printf("�������ݵĴ�ӡ  iArrVal[%d] ֵΪ %d\n",i,iArrVal[i]);  
        printf("����ָ���ӡ�������� *(piVal+%d) ֵΪ%d\n",i,*(piVal+i)); 
        printf("----------------------------------------------------\n");    
    }
    
    printf("\n");
    system("pause");
    return 0;
}
