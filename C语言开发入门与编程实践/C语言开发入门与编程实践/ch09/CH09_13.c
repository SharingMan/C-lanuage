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
	 }; /* �����붨��Drink ö������ */ 
     enum Drink c_drink; /* ���� Drink ö�����ͱ��� c_drink */

	 c_drink=coffee;               /* ָ������ c_drink ֵΪ coffee */
	 printf("ö�����͵� coffee ֵ=%d\n",c_drink) ;

	 c_drink=milk;                                          /* ָ������ c_drink ֵΪ milk */  
	 printf("ö�����͵� milk ֵ=%d\n",c_drink);

	 c_drink=water;                                       /* ָ������ c_drink ֵΪ water */
	 printf("ö�����͵� water ֵ=%d\n",c_drink);
     
     system("pause");
     return 0;
}
