#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* piVal=(int*)malloc(sizeof(int));/* ��ָ��ָ��̬�����ڴ�ռ� */
    
    printf("������piVal��ֵ =");
    scanf("%d",piVal);/* ����piVal��ֵ */ 
    printf("\n");
    printf("piVal ��ָ��ĵ�ַΪ %p\n",piVal);
    printf("piVal ��ָ��ĵ�ַ����Ϊ %d\n\n",*piVal);
    
    printf("�ͷ� piVal ��ָ����ڴ�ռ�..\n\n");
    free(piVal);/* ��ָ��piVal�Ŀռ��ͷ� */ 
    
    printf("piVal ��ָ��ĵ�ַΪ %p\n",piVal);
    printf("piVal ��ָ��ĵ�ַ����Ϊ%d\n\n",*piVal);  
    
    system("pause");  
    return 0;
}
