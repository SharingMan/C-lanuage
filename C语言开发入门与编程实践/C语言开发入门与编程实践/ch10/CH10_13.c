#include <stdio.h>
#include <stdlib.h>
struct List
{
     char w_name[20];
    	char w_tel[20];
    	char w_addr[50];
}; /* ����Ϊ List �Ľṹ���� */ 
typedef struct List person;
void print_data(char *name, char *tel, char *addr)
{
    printf("����\t    �绰\t    סַ\n");
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
    
    printf("�������޸����ݵı��� : ");
    scanf("%d", &i);
    offset=sizeof(rec)*(i-1); /* �����λ���� */ 
    fseek(fptr, offset, SEEK_SET);/* ���ļ���ʼλ���ƶ�offsetλ����,��ʼ��ȡ���� */ 
    fread(&rec,sizeof(rec),1,fptr); /* ��fread()������ȡ�ṹ����,����Ϊ1 */
    printf("------------ ��ʾԭ���������� -------------\n");
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
     printf("��������:"); 
     scanf("%s",rec.w_name);
     printf("����绰:");
     scanf("%s",rec.w_tel);
     printf("����סַ:");
     scanf("%s",rec.w_addr);
    
    fseek(fptr, offset, SEEK_SET);/* ���ָ��׼������д��ĵ�ַ */ 
    fwrite(&rec,sizeof(rec),1,fptr);
    /* ���ļ���ʼλ���ƶ�offsetλ����,��ʼд������ */
    
    fclose(fptr);
    system("pause");
    return 0;
}
