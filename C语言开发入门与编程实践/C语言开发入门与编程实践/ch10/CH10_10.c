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

int main()
{

    FILE *fptr;
    person rec;
    int i;
    fptr = fopen("record.bin","rb");
    printf("姓名\t    电话\t    住址\n");
    printf("-----\t-----------\t------------\n");
    for(i=0; i<4; i++)
    {
        fread(&rec, sizeof(rec), 1, fptr);
        /* 以fread()函数读取结构数据,笔数为1 */
        printf("%s\t", rec.w_name);
        printf("%s\t", rec.w_tel);
        printf("%s\n\n", rec.w_addr);
    }
    fclose(fptr);
    
    system("pause");
    return 0;
}
