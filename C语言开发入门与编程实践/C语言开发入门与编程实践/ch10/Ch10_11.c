#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch, str[10];

    if ((fptr = fopen("temp.txt", "r")) == NULL)
        printf("�ļ���ʧ�ܣ�");
    else
    {
        
        printf("�ַ�����ȡ:6���ַ�һ��\n");
        printf("------------------------------------\n");
        while( !feof(fptr) )
        {
            fgets(str,7, fptr);/* ÿ�ζ�ȡ6���ַ� */ 
            printf("%7s\t", str);
            printf("        ���ڹ��:%x\n", fptr->_ptr);/* ��ӡ����ַ */ 
        }
         printf("------------------------------------\n");
         rewind(fptr);/* ���ļ���ȡ��귵��fptr�ļ��Ŀ�ͷ */
         printf("�ַ�����ȡ:10���ַ�һ��\n");
         printf("------------------------------------\n");
         while( !feof(fptr) )
        {
            fgets(str, 11, fptr);
            printf("%11s\t", str);/* ÿ�ζ�ȡ10���ַ� */
            printf("���ڹ��:%x\n", fptr->_ptr);/* ��ӡ����ַ */     
        }
        
    }
    
     fclose(fptr); 
       
     system("pause");
     return 0;
}
