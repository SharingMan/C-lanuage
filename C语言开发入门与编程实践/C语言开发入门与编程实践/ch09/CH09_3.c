#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct foo
    {
        int a;
        int b;
    } f1; /* 单纯用来说明的范例 */ 

    struct foo *f2 = &f1;/* f2 指向 f1结构变量 */ 
    int i;

    f2->a = 1;
    f2->b = 10;

    f2->a++;    /* 等于 (f2->a)++ */
    printf("f2->a = %d\n", f2->a);
    --f2->b;    /* 等于 --(f2->b) */
    printf("f2->b= %d\n",f2->b);
    
    system("pause");
    return 0;
}
