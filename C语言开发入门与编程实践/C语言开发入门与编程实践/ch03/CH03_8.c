#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char c,c1[20];
    printf("���ɼ�����������,������밴Enter����");  
    c=getchar();/* �Ӽ��̶�ȡһ���ַ�,������Enter�� */ 
    printf("����������ַ�Ϊ��");  
    scanf("%s",c1); /* scanf() ������ȡ�ڻ��������ַ� */         
    putchar(c);
    printf("\n%s\n",c1);
    putchar('\n');/* ��putchar������������ַ�*/ 
    
    system("pause");    
    return 0; 
}
