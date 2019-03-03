#include<stdio.h>
#include<math.h>/*引用matn.h头文件*/

int main()
{
	double number;
	printf("请输入一个double数据类型的数字:");
    scanf("%lf",&number);
    /*输出结果*/
   	  printf("%f的绝对值=%f\n",number,fabs(number));
   	  printf("%f无条件进入后=%f\n",number,ceil(number));
   	  printf("%f无条件舍去后=%f\n",number,floor(number));
       printf("%f四舍五入法后=%.0f\n",number,number);  
      	
 	system("pause");
    return 0;
}
