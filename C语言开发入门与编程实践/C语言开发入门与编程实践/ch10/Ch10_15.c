#include <sys\stat.h> /* O_CREAT�����������ͷ�ļ� */
#include <io.h> /* �޻������ļ���ȡ�����������ͷ�ļ� */ 

int main()
{
    int fptr,fptr1,bytes;
    char str[256];/* �������û�����,һ�οɶ�ȡ256���ֽ� */
    
    fptr = open("���乫��.txt", O_RDONLY);/* �趨�ɹ���ȡ�ļ� */
    fptr1=open("���乫������.txt",O_CREAT|O_WRONLY);/* �趨�ɹ�������д���µ��ļ� */
    
    if((fptr==-1)&& (fptr1==-1))    /* ����ļ��Ƿ�򿪳ɹ� */
        puts("�޷����ļ�");
    else
        {
        while( !eof(fptr) )/* �ж��ļ��Ƿ��ȡ��� */
        {
            bytes=read(fptr,str,256);/* bytes Ϊ����ʵ�ʶ�ȡ���ֽ���Ŀ */  
            write(fptr1,str,bytes);/* д��bytes���ֽ� */ 
            printf("%s\n",str);
        }    
        }
        close(fptr);    /* �ر��ļ� */
        close(fptr1); 
        
     system("pause");
     return 0;

}
