#include <stdio.h>
#include <stdlib.h>
int main()
{
    int area_code,tel_num;
        
    printf("������绰����(������)��ʮλ:");
    scanf("%3d%7d",&area_code,&tel_num);
    /* ����λ������λ������������*/ 
    printf("���ĵ绰����Ϊ:%3d\n",area_code);
    printf("���ĵ绰����Ϊ:%7d\n",tel_num);    
    /* ��ӡ���绰������绰���� */ 
    system("pause");
    return 0;
}
