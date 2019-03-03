#include <stdio.h>
#include <stdlib.h>

int main()
{
float length, width, height;
float ans;  
  
printf("请输入长方体的长度,宽度,高度 : ");
scanf("%f%f%f",&length, &width, &height);
ans = length*width*height;/* 计算体积公式 */ 
printf("\n长方体的体积 : %6.1f\n", ans);/* 取小数点后一位数 */
printf("----------------------------------------\n"); 
	
system("pause");   
return 0;
}
