#include <stdio.h>
#include <stdlib.h>

int Factorial( int );  /* �׳����㺯��*/
static int count ;/* ������̬�ⲿ���� */
int main()
{
    int number, answer;

    printf( "��������ֵ��׳ˣ�" );
    scanf( "%d", &number );/* ����ײ���Ŀ */ 
    answer = Factorial(number);/* ���� Factorial()���� */ 
    printf( "%d! = %d\n", number, answer );
    printf("count =%d\n",count);/* ��ӡĿǰ��countֵ */ 
    system("pause");
    return 0;
}

/* �Ա�����numberָ����ֵ���н׳����� */
/* ����ֵ���׳������� */
int Factorial( int number )
{
int i;
    count=1;
    for(i=1;i<=number;i++)
    count=count*i;
    return count;
}
