#include "stdio.h"
#include "stdlib.h"

int main()
{
    FILE *fptr;
    int data[5]={ 1178,1623,8845,6116,92319 };
    fptr = fopen("�������ļ�.bin", "wb");
    fwrite(data, sizeof(int),5,fptr);
     /* fwrite()�������봫��4���Ա���,
     dataΪһ������,�ɴ��������ĵ�ַ*/ 
    fclose(fptr);
    system("pause");
    return 0;
}
