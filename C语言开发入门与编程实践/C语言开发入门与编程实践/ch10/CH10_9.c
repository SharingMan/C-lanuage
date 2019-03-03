#include <stdio.h>
#include <string.h> /* �����ַ�����������ͷ�ļ�  */ 
#include <stdlib.h>

struct List
{
     char w_name[20];
    	char w_tel[20];
    	char w_addr[50];
}; /* ����Ϊ List �Ľṹ���� */ 

typedef struct List person;

void addData(char *name, char *tel, char *addr, FILE *fptr)
{
    person ad;
    strcpy(ad.w_name, name);
    strcpy(ad.w_tel, tel);
    strcpy(ad.w_addr, addr);
    fwrite(&ad, sizeof(ad), 1, fptr);/* ��fwrite()����д��ṹ����,����Ϊ1 */ 
}/* д���ļ��������� */ 

int main()
{

    FILE *fptr;
    fptr = fopen("record.bin","wb");
    addData("������", "(07)1234567", "������������", fptr);
    addData("���Ļ�", "(02)87654321", "̨����������", fptr);
    addData("��ѧ��", "(06)6543210", "̨���а�ƽ��", fptr);
    addData("�����", "(04)5545179", "��������Ӫ��", fptr);
    fclose(fptr);
    
    system("pause");
    return 0;
}
