#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    /*数据类型转换的结果*/  
     int i=2;
     float f=5.2;
     double d;
     unsigned char c=132;/* char变量的值超过127,利用unsigned保留字,
                             使其成为正数 */ 
     
    /*打印出各数据类型变量的初始值*/
     printf("i=%d\nf=%f\nc=%d\n",i,f,c);
     d=i+f; /* 浮点数与整数的减法*/
 	 c=c/i;  /* 字符的运算 */  
     printf("---------------------------------\n"); 
     printf("d=i+f=%f\nc的整数值=%d\nc的字符值=%c\n",d,c,c);
     printf("---------------------------------\n"); 
     system("pause");
     return 0;
}
