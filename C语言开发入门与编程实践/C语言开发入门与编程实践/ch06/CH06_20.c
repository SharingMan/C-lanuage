#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s[4][30]={ "Hello","Peter","How are you ?","Kevin" };
    char** ppcArrVal=(char**)malloc(4*sizeof(char*));
    /* ����һ���ַ����͵�ָ���������������������ʼֵ����ppiArrValָ����� */ 
    for(i=0;i<4;i++)
    {
    ppcArrVal[i]=(char*)malloc(sizeof(s[i]));
    /* �ֱ����õ�һά����Ӧ�ڶ�ά����,����s[i]���ַ����ĳ��� */
    ppcArrVal[i]=s[i];
    }
                  

    for(i=0;i<4;i++)
    {
        int iCount=0;
        while(ppcArrVal[i][iCount++]!='\0');/* �����ַ����ĳ��� */ 
        
        printf("ppcArrVal[%d] �ĳ���Ϊ %d",i,iCount);
        printf("  ����Ϊ %s\n",ppcArrVal[i]);
    }                  

    for(i=0;i<4;i++)
    {
        free(ppcArrVal[i]);/* �ͷ�ָ��ָ��ĵڶ�ά�����ڴ�ռ� */
    }    
   
     free(ppcArrVal);       /* �ͷ�ָ��ָ��ĵ�һά�����ڴ�ռ� */
    
    system("pause");
    return 0;
}
