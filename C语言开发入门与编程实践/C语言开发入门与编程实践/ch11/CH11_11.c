# include <stdio.h>
# include <string.h>      /* 包含 <string.h> 头文件 */
# include <ctype.h>       /* 包含 <ctype.h> 头文件 */
# include <stdlib.h>
  
int main()
  
{ 
	char Usr_Name[20];                         /* 定义字符数组 Usr_Name[20] */
	char Usr_Code[20];                          /* 定义字符数组 Usr_Code[20] */
	unsigned int count, failed_name, digit;            /* 定义变量 failed 与 digit，*/
                                             /* 作为程序判断的标志。 */
	do
	{
		failed_name=digit=0;                   /* 将变数 failed_name 与 digit 归0 */
			
	    printf("设定使用者名称:");
	    gets(Usr_Name);                       /* 读取 Usr_Name 字符串 */
         printf("设定使用者密码:");
	    gets(Usr_Code);                       /* 读取 Usr_Name 字符串 */
  
         printf("\n");                        /* 换行 */
  
		for (count=0; count < strlen(Usr_Name); count++)
			if ( !isalnum(Usr_Name[count]) )     /* 检查是否为英文与数字字母 */
			{
				failed_name=1;
				puts("使用者名称只能输入英文与数字字符.\n");
				break;                    /* 跳离 for 循环 */
			}
  
		for (count=0; count < strlen(Usr_Code); count++)
			if ( !isalnum(Usr_Code[count]) )      /* 检查是否为英文与数字字母 */
			{
				puts("密码只能输入英文与数字字符.\n");
				break;                     /* 跳离 for 循环 */
			}
			else
				if ( isdigit(Usr_Code[count]) )    /* 检查是否为数字字母 */
				   digit=1;
  
		if ( digit != 1 )
			puts("密码必需含有数字字符\n");
	 }
        while ( failed_name || !digit );          /* 输入正确则结束程序 */
          puts("使用者名称与密码设定完成!!\n");
      
        system("pause");
        return 0;
}
