#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c1,c2;
    printf("�밴��һ������!");       
    c1=getche();  /* �Ὣ��������ַ���ʾ����Ļ��*/ 
    putchar('\n');
    printf("���ٰ���һ������!");
    c2=getch();  /* ���Ὣ��������ַ���ʾ����Ļ��*/ 
    putchar('\n'); 
    printf("getche()��ȡ���ַ�:%c\n", c1);          
    printf("getch ()��ȡ���ַ�:%c\n", c2);
    
    system("pause");  
    return 0;
}
