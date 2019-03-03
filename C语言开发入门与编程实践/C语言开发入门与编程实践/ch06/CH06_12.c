#include <stdio.h>                   // 包含头文件 <stdio.h>
#include <stdlib.h> 

int main()
{
	 char Name[]="John";                /* 定义字符数组 Name[]，并指定其初始值*/
	 char *p_N="Mary";                  /*定义字符串指针 *p_N，并指定其初始值*/
	 printf("Name[] 的地址:%p Name第一个字符地址=%p 字符串的内容:%s\n" ,&Name ,Name+0,Name);    
              /*显示字符数组的内容*/
	 /* Name++; Name为指针常量,不可运算 */ 
	 /* Name=p_N Name为指针常量,不可改变其值 */
      
     printf("p_N的地址:%p p_N第一个字符地址=%p 字符串的内容:%s\n" ,p_N ,p_N+0,p_N);/*显示字符串指针的内容*/
	 p_N=Name;/* p_N 指针变量,可改变其值  */  
	 printf("p_N 字符串的新内容:%s\n" ,p_N );        /*显示字符串指针的内容*/
	 p_N++; /* p_N 指针变量,可进行运算  */
     printf("p_N 字符串的新内容:%s\n" ,p_N ); 
     
     system("pause");
     return  0;
}
