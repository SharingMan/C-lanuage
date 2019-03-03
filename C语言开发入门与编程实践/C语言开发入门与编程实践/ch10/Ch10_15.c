#include <sys\stat.h> /* O_CREAT常量所定义的头文件 */
#include <io.h> /* 无缓冲区文件存取函数所定义的头文件 */ 

int main()
{
    int fptr,fptr1,bytes;
    char str[256];/* 自行设置缓冲区,一次可读取256个字节 */
    
    fptr = open("巴冷公主.txt", O_RDONLY);/* 设定可供读取文件 */
    fptr1=open("巴冷公主复件.txt",O_CREAT|O_WRONLY);/* 设定可供创建与写入新的文件 */
    
    if((fptr==-1)&& (fptr1==-1))    /* 检查文件是否打开成功 */
        puts("无法打开文件");
    else
        {
        while( !eof(fptr) )/* 判断文件是否读取完毕 */
        {
            bytes=read(fptr,str,256);/* bytes 为返回实际读取的字节数目 */  
            write(fptr1,str,bytes);/* 写入bytes个字节 */ 
            printf("%s\n",str);
        }    
        }
        close(fptr);    /* 关闭文件 */
        close(fptr1); 
        
     system("pause");
     return 0;

}
