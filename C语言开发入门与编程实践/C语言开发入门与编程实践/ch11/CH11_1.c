#include<stdio.h>
#include<ctype.h>/*引用字符处理函数头文件*/

int main()
{
	char ch1;
 	for( ;ch1!=' '; )
 	{
  		printf("请输入任一字符");
  		printf("(输入空格键为结束):");
 		/*读取字符*/
  		ch1=getch();
  		printf("\n");
  		/*字母部分*/
  		if(isalpha(ch1)) /* 判断是否为字符 */ 
    	{
     		printf("%c字符为字母\n",ch1);
     		if(islower(ch1))
       			printf("将字母转成大写:%c\n",toupper(ch1));
  			else
  				printf("将字母转成小写:%c\n",tolower(ch1));   		
		}
		/*数字部分*/
		else if(isdigit(ch1))/* 判断是否为数字 */ 
  		{
    		printf("%c字符为数字\n",ch1);
    	}
    	/*其它符号部分*/
    	else if(ispunct(ch1))/* 判断是否为一般符号 */ 
    		printf("%c字符为符号\n",ch1);
  	}
    
    system("pause");	
	return 0;
}
