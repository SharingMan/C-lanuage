#include <stdio.h>
#include <stdlib.h>	
	
int main()
{
	
	int score=0;	                        /*声明整数变量*/
	
	printf("请输入语文成绩:");
	scanf("%d", &score);                    /*输入成绩*/ 
	if(score>=60)	                        
	   printf("本科成绩及格.\n");               
    else                                
       printf("本科成绩不及格.\n");                 
    
    system("pause");
    return 0;
}
