#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;/*���������ַ����ĳ���*/
	char str[30];
	char str1[30];
	printf("�������ַ���:");
	/*�����ַ���*/
	gets(str);
	printf("������ַ���Ϊ:%s\n",str);
	/*����forѭ������i,����������ַ������Ƶ�str1�ַ���*/
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];/* ��һ�ַ����� */ 
    }
    str1[i]='\0';/* �ڼ����ַ�������ʱ�����������ַ�����β�ַ�'\0' */
 	printf("���ַ�����%d���ַ�\n",i);
 	printf("ԭ�ַ���str=%s\n",str);
	printf("���ƺ��ַ���str1=%s\n",str1);
 	
    system("pause");
    return 0;
}
