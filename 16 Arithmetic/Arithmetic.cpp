#include<stdio.h>
#include<math.h>

void main()
{



	float a,b,c,d,e,f,g,h,l,m,n,o;
	printf("Please input your three number：\n");
	scanf("%f%f%f",&a,&b,&c);

	d=a+b+c;
	e=d/3;
	f=0;
	g=cos(0.0/(180*3.14)); //三角函数需要转换成弧度值，即角度/（180*π）
	h=sin(f/(180*3.14));
	l=tan(f/(180*3.14));
	m=exp(f);
	n=log(2.71828);
	o=pow(10,2);


	printf(" sum=%f \n aver=%f\n ang=%f\n cos=%f\n sin=%f\n tan=%f\n exp(0)=%f log(10)=%f pow(2,2)=%f",d,e,f,g,h,l,m,n,o);


}
