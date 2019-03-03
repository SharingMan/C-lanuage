#include <stdio.h>
#include <string.h> /* 包含字符串处理函数的头文件  */ 
#include <stdlib.h>

struct List
{
     char w_name[20];
    	char w_tel[20];
    	char w_addr[50];
}; /* 声明为 List 的结构类型 */ 

typedef struct List person;

void addData(char *name, char *tel, char *addr, FILE *fptr)
{
    person ad;
    strcpy(ad.w_name, name);
    strcpy(ad.w_tel, tel);
    strcpy(ad.w_addr, addr);
    fwrite(&ad, sizeof(ad), 1, fptr);/* 以fwrite()函数写入结构数据,笔数为1 */ 
}/* 写入文件函数内容 */ 

int main()
{

    FILE *fptr;
    fptr = fopen("record.bin","wb");
    addData("胡照明", "(07)1234567", "高雄市新兴区", fptr);
    addData("刘的华", "(02)87654321", "台北市信义区", fptr);
    addData("张学华", "(06)6543210", "台南市安平区", fptr);
    addData("吴大铭", "(04)5545179", "高雄市左营区", fptr);
    fclose(fptr);
    
    system("pause");
    return 0;
}
