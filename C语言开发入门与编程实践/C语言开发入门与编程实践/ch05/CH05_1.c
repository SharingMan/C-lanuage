#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Score[5];                       /* 定义整数数组 Score[5] */
     int count, Total_Score=0,average=0;                     

     for (count=0; count < 5; count++)  /* 执行 for 循环读取学生成绩*/
     {
         printf("输入第 %d 位学生的分数:", count+1);
         scanf("%d", &Score[count]);     /* 把输入的分数写到数组 */
         Total_Score+=Score[count];    /* 由数组中读取分数计算总合 */
     }
     
     average=Total_Score/5;    /* 计算平均分数 */ 
     printf("\n");                    /* 换行 */
     printf("5位学生的总分:%d\n", Total_Score); /* 输出成绩总合 */
     printf("5位学生的平均:%d\n", average); /* 输出成绩平均 */
     
     system("pause");
     return 0;
}
