#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct foo
    {
        int a;
        int b;
    } f1; /* ��������˵���ķ��� */ 

    struct foo *f2 = &f1;/* f2 ָ�� f1�ṹ���� */ 
    int i;

    f2->a = 1;
    f2->b = 10;

    f2->a++;    /* ���� (f2->a)++ */
    printf("f2->a = %d\n", f2->a);
    --f2->b;    /* ���� --(f2->b) */
    printf("f2->b= %d\n",f2->b);
    
    system("pause");
    return 0;
}
