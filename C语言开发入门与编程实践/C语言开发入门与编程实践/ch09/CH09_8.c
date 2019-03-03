#include <stdio.h>
#include <stdlib.h>

int main()
 {
   struct grade
  {
    struct
    {
        char *name;
        int height;
        int weight;
     }   std[3];/* 省略了内层结构的名称定义，而直接使用grade结构来定义*/
    char *teacher;
  }g1={"John",174,65,"Justin",168,56,"Bush",177,80,"Mary"};
  /* 声明并设定结构变量g1的初始值 */ 

      int i;
  
   printf("老师:%s \n",g1.teacher); 
   printf("-----------------------------------------------\n");
   printf("学生姓名,身高,体重如下:\n"); 
   
    for (i=0;i<3;i++)
    printf("%s %d %d \n",g1.std[i].name,g1.std[i].height,g1.std[i].weight);
   /* 嵌套结构存取与一般结构一样，多一层结构就要多一个小数点.*/
    system("pause");
    return 0;
 }
