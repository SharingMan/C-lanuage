#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n1,n2,sum;
    
    printf("输入学生人数:"); 
    scanf("%d",&n1);
    printf("每位学生有几科成绩:");
    scanf("%d",&n2);
    printf("-------------------------------------------\n");
    
    int** ppiArrVal=(int**)malloc(n1*sizeof(int*)); /*配置一个整数类型的指针数组变量，并将数组起始值传给ppiArrVal指针变量*/
                  
     
     for(i=0;i<n1;i++)
    {
        ppiArrVal[i]=(int*)malloc(n2*sizeof(int));
    } /* 配置一个长度为n2的连续内存空间，并将配置的地址指派给ppiArrVal所代表第一维数组的每个元素 */
         
    
    for(i=0;i<n1;i++)
    {
     printf("第%d个学生\n",i+1);
    for(j=0;j<n2;j++)
    {
    printf("第%d科成绩:",j+1); 
    scanf("%d",&ppiArrVal[i][j]);
    }
     printf("-------------------------------------------\n");
    }
    
    
     for(i=0;i<n1;i++)
    {
     printf("第%d个学生的成绩:",i+1);
     sum=0;
    for(j=0;j<n2;j++)
    {
    printf("%d\t",ppiArrVal[i][j]); 
    sum+=ppiArrVal[i][j];/* 统计总分 */ 
     
    }
    printf("总分=%d",sum);
    printf("\n");
    } /* 打印学生成绩与总分 */ 
    
    for(i=0;i<n1;i++)
    {
        free(ppiArrVal[i]);
    }  /*第二维数组内存释放完毕*/  
    free(ppiArrVal);/*第一维数组内存释放完毕*/ 
    
     system("pause");
    return 0;
}
