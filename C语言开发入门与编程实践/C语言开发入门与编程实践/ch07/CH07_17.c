#include <stdio.h>                 
#include <stdlib.h>

int main()                      
{
     auto int iVar=5;              /* 定义 auto整数变量 iVar */

	 printf("进入程序块前的iVar=%d\n",iVar); 

	 /* 底下以大括号区隔出一段程序块 */
	 printf("------------------------------------\n");
     {
		 auto int iVar=10;       /* 程序块中定义整数变量 iVar */
         iVar++; /* iVar加一 */ 
         printf("程序块中的 iVar=%d\n",iVar);
	 }

      printf("------------------------------------\n");
      printf("离开程序块的 iVar=%d\n",iVar);
     
     system("pause");
     return 0;

}
