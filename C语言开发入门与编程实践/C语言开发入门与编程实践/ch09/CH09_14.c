#include <stdio.h>
#include <stdlib.h>
union Data
{
    int a;
    char b;
    int c[4];
};/* ���������Ͽռ� */ 
int main()
{    
    union Data testData;
    
    printf("size of testData :%d\n", sizeof(testData));/* ��ʾ�����Ͽռ�Ĵ�С */ 
    printf("size of testData.a :%d\n", sizeof(testData.a));
    printf("size of testData.b :%d\n", sizeof(testData.b));
    printf("size of testData.name:%d\n", sizeof(testData.c));
    /* testData�����ݳ�Ա����c�Ŀռ�(4*4=16)���
      �����c�Ĵ�СΪtestData��ȫ���ռ䡣 */
    printf("-----------------------------\n");
    testData.a = 0x4533;
    printf("testData.a=%04x\n", testData.a);
    printf("testData.a��ַ=%p\n\n", &testData.a);
    
    testData.b = 0x61;
    printf("testData.b=%c\n", testData.b);
    printf("testData.b��ַ=%p\n\n", &testData.b);
    
    printf("testData.a=%x\n", testData.a);
    /* ����Աb��ֵ����󣬳�Աa����ֵҲ�ᱻ�޸� */
    system("pause");
    return 0;
}
