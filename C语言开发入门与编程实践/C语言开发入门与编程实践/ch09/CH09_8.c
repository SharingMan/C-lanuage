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
     }   std[3];/* ʡ�����ڲ�ṹ�����ƶ��壬��ֱ��ʹ��grade�ṹ������*/
    char *teacher;
  }g1={"John",174,65,"Justin",168,56,"Bush",177,80,"Mary"};
  /* �������趨�ṹ����g1�ĳ�ʼֵ */ 

      int i;
  
   printf("��ʦ:%s \n",g1.teacher); 
   printf("-----------------------------------------------\n");
   printf("ѧ������,���,��������:\n"); 
   
    for (i=0;i<3;i++)
    printf("%s %d %d \n",g1.std[i].name,g1.std[i].height,g1.std[i].weight);
   /* Ƕ�׽ṹ��ȡ��һ��ṹһ������һ��ṹ��Ҫ��һ��С����.*/
    system("pause");
    return 0;
 }
