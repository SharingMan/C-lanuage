#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Val=123;
    float Val1=1.2345678;
    
    /* ������ʽ���ַ����ʾ�� */
    printf("----- ������ʽ���ַ����ʾ��----\n"); 
    printf("%%d�����,Val=%d\n",Val);
    printf("%%i�����,Val=%i\n",Val);
    printf("%%o�����,Val=%o\n",Val);
    printf("%%u�����,Val=%u\n",Val);
    printf("%%x�����,Val=%x\n",Val); 
    
    /* ��������ʽ���ַ����ʾ�� */
    printf("----- ��������ʽ���ַ����ʾ��----\n"); 
    printf("%%f�����,Val=%f\n",Val1);
    printf("%%g�����,Val=%g\n",Val1);     
    printf("%%e�����,Val=%e\n",Val1);
    
    system("pause");
    return 0;
}
