#include<stdio.h>
#include<stdlib.h>
/*main()中加入自变量*/
int main(int argc, char *argv[])
{
	int i;
	
	double sum=0;
	double avg=0;
	/*当执行指令时没有输入字符串时*/
	if(argc==1)
	{
  		printf("请在指令后方输入成绩!!!\n");
	}
	
    else 
    {
    printf("各科成绩: "); 
    for(i=1; i<argc; i++)
    {
    	/*输出每一个成绩字符串*/
        printf("%s ",argv[i]);
    	/*将成绩字符串转换成整数类型*/
   		sum+=atoi(argv[i]);/* 利用atoi()函数转换为整数 */ 
	}
	printf("\n-------------------------------------------\n");
	/*输出成绩总和和平均*/
 	printf("分数的总和=%.2f\n",sum);
	printf("分数平均=%.2f\n",sum/(argc-1));
     }
 	 system("pause");
     return 0;
}
