#include <stdio.h>
#include <stdlib.h>
int main()
{
    int area_code,tel_num;
        
    printf("请输入电话号码(含区号)共十位:");
    scanf("%3d%7d",&area_code,&tel_num);
    /* 以三位数和七位数来输入整数*/ 
    printf("您的电话区号为:%3d\n",area_code);
    printf("您的电话号码为:%7d\n",tel_num);    
    /* 打印出电话区号与电话号码 */ 
    system("pause");
    return 0;
}
