#include "stdio.h"
#include "stdlib.h"

int main()
{
    FILE *fptr;
    int data[5]={ 1178,1623,8845,6116,92319 };
    fptr = fopen("二进制文件.bin", "wb");
    fwrite(data, sizeof(int),5,fptr);
     /* fwrite()函数必须传递4个自变量,
     data为一数组名,可代表该数组的地址*/ 
    fclose(fptr);
    system("pause");
    return 0;
}
