#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	
	printf("请输入数学成绩?");
	scanf("%d",&score);

	if ( score>60 ) 
		goto pass;		  // 找到卷标名称为"pass"的程序语句继续执行程序.
	else
		goto nopass;	  // 找到卷标名称为"nopass"的程序语句继续执行程序.	

	pass:               //pass标签
	printf("数学及格!\n");       
	goto TheEnd;         // 找到卷标名称为"TheEnd"的程序语句继续执行程序.

	nopass:           //nopass标签
	printf("数学成绩不及格!\n");

	TheEnd:  
    printf("---------------------------------\n");
    printf("统计完成!\n");  //TheEnd标签
	
	system("pause");
    return 0;
}
