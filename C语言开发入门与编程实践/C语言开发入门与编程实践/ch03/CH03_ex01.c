#include <stdio.h>
int main()
{
char* str3="***";
int integer = 13;
float pi = 123.14159;
printf("1234567890<-字符数标示行\n");
printf("%6s\n",str3);  // 字符串输出栏宽设定 
printf("%.6d\n",integer);
printf("%6.2f\n",pi);
system("pause");
return 0;
}
