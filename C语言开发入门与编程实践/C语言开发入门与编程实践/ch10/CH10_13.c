#include <stdio.h>
#include <stdlib.h>
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
    FILE *fptr;
    int offset,i;
    person rec;
    
    fptr = fopen("record.bin","r+b");
    printf("/-------------------------------------\n");
    
    printf("请输入修改数据的笔数 : ");
    scanf("%d", &i);
    offset=sizeof(rec)*(i-1); /* 计算出位移量 */ 
    fseek(fptr, offset, SEEK_SET);/* 于文件起始位置移动offset位移量,开始读取数据 */ 
    fread(&rec,sizeof(rec),1,fptr); /* 以fread()函数读取结构数据,笔数为1 */
    printf("------------ 显示原来数据内容 -------------\n");
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
     printf("输入姓名:"); 
     scanf("%s",rec.w_name);
     printf("输入电话:");
     scanf("%s",rec.w_tel);
     printf("输入住址:");
     scanf("%s",rec.w_addr);
    
    fseek(fptr, offset, SEEK_SET);/* 光标指定准备重新写入的地址 */ 
    fwrite(&rec,sizeof(rec),1,fptr);
    /* 于文件起始位置移动offset位移量,开始写入数据 */
    
    fclose(fptr);
    system("pause");
    return 0;
}
