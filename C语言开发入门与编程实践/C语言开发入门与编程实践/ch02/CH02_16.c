//* λ��������ϰ */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bit_test=12;          /* ������������ (0001100) */
	int bit_test1=7;/* ������������ (00000111) */
	printf("bit_test= %d bit_test1= %d\n",bit_test,bit_test1);
	printf("----------------------------------------------\n");
	/* ִ�� AND,OR,XOR λ���� */ 
	printf("ִ�� AND ����Ľ��:%d\n", bit_test & bit_test1);
    printf("ִ�� OR  ����Ľ��:%d\n", bit_test |bit_test1 );
	printf("ִ�� XOR ����Ľ��:%d\n", bit_test ^ bit_test1);
	
	system("pause");
	return 0;
}
