#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1,n;
    printf("������һ�����֣�");
    scanf("%d", &n);
    printf("%d����������Ϊ",n);
   
    while(a<=n)                      /*����whileѭ��*/
    {
       if(n%a==0)                    /*��n�ܹ���a����ʱ~��a����n������*/ 
       {                             /*��ִ��if�ڵ����*/
         printf("%d ",a);    
		  if(n!=a)printf(",");
       }
       a++;                          /*aֵ����1*/
    }
    
    printf("\n");
    system("pause");
    return 0;
}
