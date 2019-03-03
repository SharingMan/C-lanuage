#include <stdio.h>
#include <stdlib.h>        /* 包含 <stdlib.h> 头文件 */

int main()
{
	   char Read_Str[20]; /* 定义字符数组 Read_Str[20] */
    double d,cubic;
    
		printf("请输入打算转换成实数的字符串:");
		gets(Read_Str);  /* 读取字符串 */
		d=atof(Read_Str); /* atof() 字符串函数转换,并输出实数 */
		cubic=d*d*d; 
      printf("%f 的立方值=%f \n",d,cubic );     
                                        	
      system("pause");
      return 0;
}
