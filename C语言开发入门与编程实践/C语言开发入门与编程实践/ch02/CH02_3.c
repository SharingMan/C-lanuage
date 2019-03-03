#include<stdio.h>
#include <stdlib.h>
main()
{	
	float f_number=123.1122334455667788f; /*单精度浮点数声明*/ 
 	double d_number=123.1122334455667788;/*双精度浮点数声明*/
    
    printf("实数值 = 123.1122334455667788\n");
    printf("----------------------------------------\n");
    /*单精度浮点数的输出方法*/
  	printf("单精度浮点数小数表示法= %f\n",f_number);
  	printf("单精度浮点数科学符号表示法= %e\n",f_number);
	/*双精度浮点数输出方法*/
	printf("----------------------------------------\n");
	printf("双精度浮点数小数表示法= %f\n",d_number);
	printf("双精度科学符号表示法= %e\n",d_number);
	
 	system("pause"); 
   return 0;
}
