#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=13,b=57;
	
	/* ���a��b�Ķ����Ʊ�ʾ�� */
	printf("a=13,������Ϊ00001101\n");
	printf("b=57,������Ϊ00111001\n");
	printf("λ���������㷶��-----\n\n"); 
	/*λ�����������ϵ*/ 
    printf("%d & %d = %d\n",a,b,a&b);
	printf("%d | %d = %d\n",a,b,a|b);
	printf("%d ^ %d = %d\n",a,b,a^b);
	printf("~%d = %d\n",b,~b);
	printf("%d >> 2 = %d\n",a,a>>2);
	printf("%d << 2 = %d\n",a,a<<2);
    system("pause");  
    return 0;
}
