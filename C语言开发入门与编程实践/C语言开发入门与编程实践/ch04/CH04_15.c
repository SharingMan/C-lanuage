#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1, new_pw, password=1234;            /*利用password变量来保存密码以供验证*/

	while(i<=3)                                /*输入次数以三次为限*/
	{			
		printf("请输入密码:");  
	    scanf("%d", &new_pw);
		if (new_pw != password)                /*如果输入的密码与password不同*/
		{
			printf("密码错误!!\n");    
			i++;                                     
			continue;                          /*跳回while开始处*/
		}
		printf("密码正确!!\n ");               /*密码正确*/
		break;  		                       
	}  	
	if (i>3)
		printf("密码错误三次，取消登入!!\n"); 
           
	system("pause");
    return 0;
}
