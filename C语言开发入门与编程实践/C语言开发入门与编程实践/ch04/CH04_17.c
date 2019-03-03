#include <stdio.h>                                     /* 包含 <conio.h> 头文件 */
#include <conio.h> 

int main()
{
     while ( !kbhit() )                                /* 使用 kbhit() 函数等待使用者按键 */
		 printf("输入任一键结束程序\n");
      return 0;
}
