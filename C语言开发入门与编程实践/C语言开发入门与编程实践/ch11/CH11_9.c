#include<stdio.h>
#include<stdlib.h> /*���������������ͷ�ļ�*/

int main()
{	
	int i;
	printf("===rand()���������===\n");
	printf("�����������:\n");
	for(i=0; i<5; i++)
	{		
  		printf("%d  ",rand());
	}
	printf("\n");
	
    system("pause");
 	return 0;
}
