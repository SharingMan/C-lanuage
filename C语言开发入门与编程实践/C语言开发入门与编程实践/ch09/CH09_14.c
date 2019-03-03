#include <stdio.h>
#include <stdlib.h>
union Data
{
    int a;
    char b;
    int c[4];
};/* 声明此联合空间 */ 
int main()
{    
    union Data testData;
    
    printf("size of testData :%d\n", sizeof(testData));/* 显示此联合空间的大小 */ 
    printf("size of testData.a :%d\n", sizeof(testData.a));
    printf("size of testData.b :%d\n", sizeof(testData.b));
    printf("size of testData.name:%d\n", sizeof(testData.c));
    /* testData的数据成员中以c的空间(4*4=16)最大，
      因此以c的大小为testData的全部空间。 */
    printf("-----------------------------\n");
    testData.a = 0x4533;
    printf("testData.a=%04x\n", testData.a);
    printf("testData.a地址=%p\n\n", &testData.a);
    
    testData.b = 0x61;
    printf("testData.b=%c\n", testData.b);
    printf("testData.b地址=%p\n\n", &testData.b);
    
    printf("testData.a=%x\n", testData.a);
    /* 当成员b数值载入后，成员a的数值也会被修改 */
    system("pause");
    return 0;
}
