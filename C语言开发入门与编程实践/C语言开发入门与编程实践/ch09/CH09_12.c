#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER; /* Integer ������� int ���� */ 
typedef char STRING[20];/* STRING ������ɳ���Ϊ20���ַ����� */

typedef struct hotel
{
    INTEGER roomNumber;
    STRING hotelName;
} hotel_Info; /* ��typedefָ�hotel�ṹ,���¶����hotel_Info */ 

int main()
{    
    hotel_Info myhotel; /* ���¶���ṹ�����ؼ���struct������ */ 
    printf("�ù�����:");
    scanf("%s",myhotel.hotelName); 
    printf("������Ŀ:");
    scanf("%d",&myhotel.roomNumber);
    printf("------------------------------------\n");
    printf("�ù�����:%s\n", myhotel.hotelName);
    printf("������Ŀ:%d\n", myhotel.roomNumber);
    
    system("pause");
    return 0;
}
