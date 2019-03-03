#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER; /* Integer 被定义成 int 类型 */ 
typedef char STRING[20];/* STRING 被定义成长度为20的字符数组 */

typedef struct hotel
{
    INTEGER roomNumber;
    STRING hotelName;
} hotel_Info; /* 以typedef指令将hotel结构,重新定义成hotel_Info */ 

int main()
{    
    hotel_Info myhotel; /* 重新定义结构，不必加上struct保留字 */ 
    printf("旅馆名称:");
    scanf("%s",myhotel.hotelName); 
    printf("房间数目:");
    scanf("%d",&myhotel.roomNumber);
    printf("------------------------------------\n");
    printf("旅馆名称:%s\n", myhotel.hotelName);
    printf("房间数目:%d\n", myhotel.roomNumber);
    
    system("pause");
    return 0;
}
