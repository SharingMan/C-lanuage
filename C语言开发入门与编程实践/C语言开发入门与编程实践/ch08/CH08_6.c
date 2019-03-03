#include <stdio.h>                             
#include <stdlib.h> 

#define CHOICE 2                                  /* 定义标识符 CHOICE */ 

#if CHOICE==1       /* 如果 CHOICE==1,定义标识符 START 为 11,
                      标识符 END 为 20*/
  #define START 11                                
  #define END 20  
                                  
#elif CHOICE==2   /* 如果 CHOICE==2,定义标识符 START 为 21,
                               定义标识符 END 为 30 */
  #define START 21                                
  #define END 30   
                                 
#else       /* 如果前面的条件都不成立,定义标识符 START 为 1,
                             定义标识符 START 为 10*/
  #define START 1                                 
  #define END 10   
                                 
#endif                   /* 结束预处理指令 #if */

int main()                       
{
	 int Total=0,count; 
                                     /* 定义整数变量 Total */
	 for (count=START; count <= END; count++) /* for 循环执行加法运算 */
	 {
		 printf("%d",count);
		 if (count < END) printf( " + ");          /* 如果整数变量 (count < END)，显示"+"符号 */
		 Total+=count;
	 }
	  printf( "= %d",Total);                       /* 显示整数变量 Total 的值 */
	  
      system("pause");
      return 0;                             
}
