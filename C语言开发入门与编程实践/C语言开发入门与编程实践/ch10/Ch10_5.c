#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr,*fptr1;
    char str[31];
    
    fptr = fopen("���乫��.txt", "r");
    fptr1=fopen("���临���ļ�.txt","w");
    
    if(fptr ==NULL|| fptr1==NULL)    /* ����ļ��Ƿ�򿪳ɹ� */
        puts("�޷����ļ�");
    else
        while( !feof(fptr) )/* �ж��ļ��Ƿ��ȡ��� */
        {
            fgets(str, 31, fptr);    /* str[31]����������'\0' */
            printf("%s\n", str);
            fputs(str,fptr1); /* ��str�ַ���д�뵽fptr1�ļ��� */ 
            
        }

    fclose(fptr);    /* �ر��ļ� */
    fclose(fptr1); 
    
    system("pause");
    return 0;

}
