#include<stdio.h>
#include<stdlib.h>
#include<math.h>/*����matn.hͷ�ļ�*/

int main()
{
	double rad;
	double deg;
 	double pi=3.14159;
 	printf("������Ƕ�:");
	scanf("%lf",&deg);
	rad=deg*pi/180;/*���Ƕ�ת���ɾ���*/
	/*������*/
	printf("sin(%.f��)=%.4f\n",deg,sin(rad));
	printf("cos(%.f��)=%.4f\n",deg,cos(rad));
	printf("tan(%.f��)=%.4f\n",deg,tan(rad));
	/*˫���߲���*/
 	printf("˫���ߵ�sin(%.f��)=%.4f\n",deg,sinh(rad));
	printf("˫���ߵ�cos(%.f��)=%.4f\n",deg,cosh(rad));
	printf("˫���ߵ�tan(%.f��)=%.4f\n",deg,tanh(rad));
	
	system("pause");
 	return 0;
}
