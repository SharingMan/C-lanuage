#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a,b;
    a=b=5;/*声明a,b的值*/ 
 	/*利用复合赋值操作符,计算下列算式*/
     printf("a=%d , b=%d \n",a,b);
     
     a+=5; 
 	 b*=6;
     printf("a+=5,b*=6 \n"); 
     printf("a的新值为%d, b的新值为 %d\n",a,b);
     
  	 /* 复合赋值操作符的多层运算 */
  	 a+=a+=b+=b%=4;
     printf("a+=a+=b+=b%%=4 的值为 %d \n",a);
     
     system("pause");
     return 0;
}
