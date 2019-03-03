#include <stdio.h>
#include <stdlib.h>
		
int main()
{
	int year=0;	 
     /*声明整数变量*/
	printf("请输入公元年:");
	scanf("%d", &year);  /*输入公元年*/ 
	if(year % 4 !=0)	 /*如果year不是4的倍数*/
	   printf("%d 年不是闰年。\n",year); /*则显示year不是闰年*/
	else if(year % 100 ==0)  /*如果year是100的倍数*/
        {
            if(year % 400 ==0)      /*且year是400的倍数*/
	   			printf("%d 年是闰年。\n",year); 
               /*显示year是闰年*/
			else      /*否则*/
	   			printf("%d 年不是闰年。\n",year); 
            /*则显示year不是闰年*/
		}	
    else  /*否则*/
       printf("%d 年是闰年。\n",year); /*则显示year是闰年*/
    
    system("pause");
    return 0;
}
