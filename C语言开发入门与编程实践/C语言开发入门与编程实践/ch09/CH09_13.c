#include <stdio.h>                          
#include <stdlib.h>

int main()
{
     enum Drink                                  
	 {
		 coffee=25,
		 milk=20,
		 tea=15,
		 water
	 }; /* 声明与定义Drink 枚举类型 */ 
     enum Drink c_drink; /* 定义 Drink 枚举类型变量 c_drink */

	 c_drink=coffee;               /* 指定变量 c_drink 值为 coffee */
	 printf("枚举类型的 coffee 值=%d\n",c_drink) ;

	 c_drink=milk;                                          /* 指定变量 c_drink 值为 milk */  
	 printf("枚举类型的 milk 值=%d\n",c_drink);

	 c_drink=water;                                       /* 指定变量 c_drink 值为 water */
	 printf("枚举类型的 water 值=%d\n",c_drink);
     
     system("pause");
     return 0;
}
