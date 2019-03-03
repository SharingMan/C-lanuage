#include<stdio.h>
#include<math.h>/*引用matn.h头文件*/

int main()
{
	int i=1;
 	double x=3.0,y=5.45;
 	
    /*输出结果*/
    printf("exp(%.f)=%f\n",x, exp(x));
    printf("---------------------------------\n");
 	printf("log(%.f)=%f\n",x, log(x));
 	printf("---------------------------------\n");
 	printf("log10(%.f)=%f\n",x, log10(x));
 	printf("---------------------------------\n");
 	printf("sqrt(%.f)=%f\n",x,sqrt(x));
 	printf("---------------------------------\n");
 	printf("pow(%.f,%f)=%f\n",x,y,pow(x,y)); 		
 	printf("---------------------------------\n");
    
    system("pause");
    return 0;
}
