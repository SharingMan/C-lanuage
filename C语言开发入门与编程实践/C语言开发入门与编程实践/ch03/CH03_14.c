#include <stdio.h>
#include <stdlib.h>

int main()
{
float length, width, height;
float ans;  
  
printf("�����볤����ĳ���,���,�߶� : ");
scanf("%f%f%f",&length, &width, &height);
ans = length*width*height;/* ���������ʽ */ 
printf("\n���������� : %6.1f\n", ans);/* ȡС�����һλ�� */
printf("----------------------------------------\n"); 
	
system("pause");   
return 0;
}
