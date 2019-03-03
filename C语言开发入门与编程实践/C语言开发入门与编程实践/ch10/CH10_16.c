#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> /* 打开模式常量所定义的头文件 */ 
#include <sys\stat.h> /* O_CREAT常量所定义的头文件 */
#include <io.h> /* 无缓冲区文件存取函数所定义的头文件 */ 

struct List
{
        char w_name[20];
    	char w_tel[20];
    	char w_addr[50];
}; /* 声明为 List 的结构类型 */ 
typedef struct List person;
void print_data(char *name, char *tel, char *addr)
{
    printf("姓名\t    电话\t    住址\n");
    printf("-----\t-----------\t------------\n");
    printf("%s\t", name);
    printf("%s\t", tel);
    printf("%s\n\n", addr);
}
int main()
{
    int fhdl;
    int offset,i;
    person rec;
    fhdl = open("record.bin",O_RDONLY);
    printf("/-------------------------------------\n");
    
    printf("请输入要显示的数据笔数 : ");
    scanf("%d", &i);
    offset=sizeof(rec)*(i-1); /* 计算出位移量  */
    lseek(fhdl, offset, SEEK_SET);/* 于文件起始位置移动offset位移量,移动光标开始读取数据 */ 
    read(fhdl,&rec,sizeof(rec)); /* 在fhd1文件,每次读取rec结构大小的数据*/
    printf("------------ 显示数据内容 -------------\n");
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
    close(fhdl);
    
    system("pause");
    return 0;
}
