#include<stdio.h>
#include<stdlib.h>
#include<math.h>/*引用matn.h头文件*/

int main()
{
	double rad;
	double deg;
 	double pi=3.14159;
 	printf("请输入角度:");
	scanf("%lf",&deg);
	rad=deg*pi/180;/*将角度转换成径度*/
	/*输出结果*/
	printf("sin(%.f度)=%.4f\n",deg,sin(rad));
	printf("cos(%.f度)=%.4f\n",deg,cos(rad));
	printf("tan(%.f度)=%.4f\n",deg,tan(rad));
	/*双曲线部分*/
 	printf("双曲线的sin(%.f度)=%.4f\n",deg,sinh(rad));
	printf("双曲线的cos(%.f度)=%.4f\n",deg,cosh(rad));
	printf("双曲线的tan(%.f度)=%.4f\n",deg,tanh(rad));
	
	system("pause");
 	return 0;
}
