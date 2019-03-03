#include<stdio.h>
#include <stdlib.h>

int main()
{	
	
	short int number1=32767;/*声明短整数*/
  	int number2=0;/*声明整数*/
    long int number3=1234567890;/*声明长整数*/
    unsigned long int number4=978654321;/*声明无符号长整数*/
 	
     /*输出各整数数据类型*/ 
     
	printf("短整数为:%d=%d 字节\n",number1,sizeof(number1));
	printf("整数为: %d = %d字节\n",number2,sizeof(number2));
	printf("长整数为: %d=%d字节\n",number3,sizeof(number3));
	printf("无符号长整数为: %d=%d字节\n",number4,sizeof(number4));
	
    system("pause");
 	return 0;
} 
