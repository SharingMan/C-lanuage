#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> /* ��ģʽ�����������ͷ�ļ� */ 
#include <sys\stat.h> /* O_CREAT�����������ͷ�ļ� */
#include <io.h> /* �޻������ļ���ȡ�����������ͷ�ļ� */ 

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
    int fhdl;
    int offset,i;
    person rec;
    fhdl = open("record.bin",O_RDONLY);
    printf("/-------------------------------------\n");
    
    printf("������Ҫ��ʾ�����ݱ��� : ");
    scanf("%d", &i);
    offset=sizeof(rec)*(i-1); /* �����λ����  */
    lseek(fhdl, offset, SEEK_SET);/* ���ļ���ʼλ���ƶ�offsetλ����,�ƶ���꿪ʼ��ȡ���� */ 
    read(fhdl,&rec,sizeof(rec)); /* ��fhd1�ļ�,ÿ�ζ�ȡrec�ṹ��С������*/
    printf("------------ ��ʾ�������� -------------\n");
    print_data(rec.w_name, rec.w_tel, rec.w_addr);
    close(fhdl);
    
    system("pause");
    return 0;
}
