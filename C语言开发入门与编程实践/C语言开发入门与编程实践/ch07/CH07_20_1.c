#include <stdio.h>
extern int x;  /* 必须在此加上extern修饰词*/ 

void foo(void)
{
    x = 1;
}

