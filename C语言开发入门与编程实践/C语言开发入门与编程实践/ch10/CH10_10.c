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

int main()
{

    FILE *fptr;
    person rec;
    int i;
    fptr = fopen("record.bin","rb");
    printf("����\t    �绰\t    סַ\n");
    printf("-----\t-----------\t------------\n");
    for(i=0; i<4; i++)
    {
        fread(&rec, sizeof(rec), 1, fptr);
        /* ��fread()������ȡ�ṹ����,����Ϊ1 */
        printf("%s\t", rec.w_name);
        printf("%s\t", rec.w_tel);
        printf("%s\n\n", rec.w_addr);
    }
    fclose(fptr);
    
    system("pause");
    return 0;
}
