#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int iVal; 
    float fVal,fVal1;
    printf("������һ���ַ�:");
    scanf("%c",&c);/* �����ַ� */ 
    printf("����������ַ�ASCIIֵΪ:%d\n",c);
    printf("---------------------------------\n");
    printf("������˽�������:");
    scanf("%o",&iVal);/*����˽�������*/ 
    printf("ת��Ϊʮ������:%d\n",iVal);
    /* ���ø�ʽ���ַ�ת��Ϊʮ�������� */
    printf("---------------------------------\n");
    printf("����������ʵ��:"); 
    scanf("%f,%f",&fVal,&fVal1);/* ��������������*/
    /* ���ø�ʽ���ַ�ת��Ϊ��ѧ������ */
    printf("ת��Ϊ��ѧ������\n��һ����Ϊ:%e\n",fVal);
    printf("�ڶ�����Ϊ:%e\n",fVal1);
    printf("---------------------------------\n");
    system("pause");
    return 0;
}
