#include <stdio.h>
#include <stdlib.h>

int main()
{
int input;
printf("������һ��������");
scanf("%d", &input);/* ����һ������ */ 
if(input&1)/* input��1��&���� */ 
printf("����������\n");
else
printf("������ż��\n");

system("pause");
return 0;
}
