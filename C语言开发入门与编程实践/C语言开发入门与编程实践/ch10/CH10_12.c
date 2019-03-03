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
    int offset;
    person rec;
    
    fptr = fopen("record.bin","rb");
    printf("/----- 于文件起始位置读取数据 -----/\n");
    printf("请输入位移量 : :90位为单位 ");
    scanf("%d", &offset);
    fseek(fptr, offset, SEEK_SET);/* mode 常量为 SEEK_SET */
    fread(&rec,sizeof(rec),1,fptr); /* 以fread()函数读取结构数据,笔数为1 */ 
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
     
    printf("/----- 于文件光标目前位置读取数据 -----/\n");
    printf("请输入位移量 : ");
    scanf("%d", &offset);
    fseek(fptr, offset, SEEK_CUR);/* mode 常量为 SEEK_CUR */
    fread(&rec,sizeof(rec),1,fptr); /* 以fread()函数读取结构数据,笔数为1 */
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
    
    printf("/----- 于文件尾往前读取数据 -----/\n");
    printf("请输入位移量 : ");
    scanf("%d", &offset);
    fseek(fptr, offset, SEEK_END);/* mode 常量为 SEEK_END */
    fread(&rec,sizeof(rec),1,fptr); /* 以fread()函数读取结构数据,笔数为1 */
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
    fclose(fptr);

    system("pause");
    return 0;
}
