#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n1,sum,n2;
    
    printf("����ѧ������:"); 
    scanf("%d",&n1);
    
    printf("-------------------------------------------\n");
    int *no=(int*)malloc(n1*sizeof(int));/* ��ָ��noָ��̬�����ڴ�ռ� */
    int** ppiArrVal=(int**)malloc(n1*sizeof(int*)); /*����һ���������͵�ָ�����������
               ����������ʼֵ����ppiArrValָ�����*/    
     
    
    for(i=0;i<n1;i++)
    {
      printf("��%d��ѧ��\n",i+1);
      printf("��λѧ���м��Ƴɼ�:");
      scanf("%d",&n2);
      ppiArrVal[i]=(int*)malloc(n2*sizeof(int));/* ����һ������Ϊn2�������ڴ�ռ䣬
      �������õĵ�ַָ�ɸ�ppiArrVal�������һά�����ÿ��Ԫ�� */
      no[i]=n2;/* ��¼ÿ��ѧ���ĳɼ����� */  
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
     for(j=0;j<no[i];j++)
    {
     printf("%d\t",ppiArrVal[i][j]); 
     
    }
    printf("\n");
    } 
    
    for(i=0;i<n1;i++)
    {
        free(ppiArrVal[i]);
    }  /*�ڶ�ά�����ڴ��ͷ����*/  
    free(ppiArrVal);/*��һά�����ڴ��ͷ����*/ 
    
     system("pause");
    return 0;
}
