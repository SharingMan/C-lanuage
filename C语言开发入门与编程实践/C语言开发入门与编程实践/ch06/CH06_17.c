#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n1,n2,sum;
    
    printf("����ѧ������:"); 
    scanf("%d",&n1);
    printf("ÿλѧ���м��Ƴɼ�:");
    scanf("%d",&n2);
    printf("-------------------------------------------\n");
    
    int** ppiArrVal=(int**)malloc(n1*sizeof(int*)); /*����һ���������͵�ָ���������������������ʼֵ����ppiArrValָ�����*/
                  
     
     for(i=0;i<n1;i++)
    {
        ppiArrVal[i]=(int*)malloc(n2*sizeof(int));
    } /* ����һ������Ϊn2�������ڴ�ռ䣬�������õĵ�ַָ�ɸ�ppiArrVal�������һά�����ÿ��Ԫ�� */
         
    
    for(i=0;i<n1;i++)
    {
     printf("��%d��ѧ��\n",i+1);
    for(j=0;j<n2;j++)
    {
    printf("��%d�Ƴɼ�:",j+1); 
    scanf("%d",&ppiArrVal[i][j]);
    }
     printf("-------------------------------------------\n");
    }
    
    
     for(i=0;i<n1;i++)
    {
     printf("��%d��ѧ���ĳɼ�:",i+1);
     sum=0;
    for(j=0;j<n2;j++)
    {
    printf("%d\t",ppiArrVal[i][j]); 
    sum+=ppiArrVal[i][j];/* ͳ���ܷ� */ 
     
    }
    printf("�ܷ�=%d",sum);
    printf("\n");
    } /* ��ӡѧ���ɼ����ܷ� */ 
    
    for(i=0;i<n1;i++)
    {
        free(ppiArrVal[i]);
    }  /*�ڶ�ά�����ڴ��ͷ����*/  
    free(ppiArrVal);/*��һά�����ڴ��ͷ����*/ 
    
     system("pause");
    return 0;
}
