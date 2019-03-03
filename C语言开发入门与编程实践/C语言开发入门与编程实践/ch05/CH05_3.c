#include <stdio.h>
#include <stdlib.h>
 
int main()
{ 
	/* 定义二维整数数组 Score[10]，并设定初始值 */
	int Score[2][5]={ 77, 85, 73, 64, 91, 68, 89, 79, 94, 83 };            
    int Class, Student, Total;                /* 定义整数变量 Class, Student, Total */
 
	for ( Class=0; Class < 2; Class++ )          /* 巢状 for 循环读取学生分数 */
    {
			Total=0;                                 /* 把整数变数 Total 归0 */
			for ( Student=0; Student < 5; Student++)
        {
				/* 显示各个学生的分数与数据 */
			    printf("第 %d 班的 %d 号学生成绩:%d\n", Class+1, Student+1, Score[Class][Student]);    
			    Total+=Score[Class][Student];                      /* 计算总分 */
			}
        
			printf("\n");
			printf("第 %d 班学生的成绩总分: %d", Class+1, Total);  /* 打印出各班级的总分 */
			printf("\n\n");
	}
    
    system("pause");
    return 0;
}
