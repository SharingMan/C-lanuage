#include <stdio.h>
#include <stdlib.h>

int add(int, int);  /* �����ӷ� */
int sub(int, int);  /* �������� */
int mul(int, int);  /* �����˷� */
int dvd(int, int);  /* �������� */

int main( )
{
    int (*ptr)(int, int);/* ����ָ���ԭ������ */ 
    int result,no1,no2;
    char ch;
    
    printf("�����������:");
    ch=getchar();
    printf("-----------------------------------\n");
    
    
        switch ( ch )
          {
            case '+':
                ptr = add;    /* ָ���ӷ�������ַ��ptr */
                break;
            case '-':
                ptr = sub;    /* ָ������������ַ��ptr */
                break;
            case '*':
                ptr = mul;    /* ָ���˷�������ַ��ptr */
                break;
            case '/':
                ptr = dvd;    /* ָ��������������ַ��ptr */
                break;
            
            default:
                puts( "����������" );
                system("pause");
                exit(0);/* �������� */ 
         }
         
      printf("����������ĵ�һ����ֵ:" );
      scanf("%d",&no1);
      printf("����������ĵڶ�����ֵ:" );
      scanf("%d",&no2);
      result = ptr(no1, no2);/* ����ptr��ָ���ĺ������� */ 
      printf( "��������%d\n", result );

    system("pause");
    return 0;
}

int add(int num1, int num2)
{
    return num1+num2;
}

int sub(int num1, int num2)
{
    return num1-num2;
}

int mul(int num1, int num2)
{
    return num1*num2;
}

int dvd(int num1, int num2)
{
    return num1/num2;
}
