#include<stdio.h>
#include<stdlib.h>/*���������������ͷ�ļ�*/
#include<time.h>/*����ʱ�亯����ͷ�ļ�*/  

int main()
{	
	int i;
	long int seed;
	printf("===srand()���������===\n");
	printf("�����������:\n");
	
    seed=time(NULL);/*��ϵͳʱ�䵱�����������*/
	srand(seed);
	
    for(i=0; i<5; i++)
	{		
  		printf("%d  ",rand());
	}
	printf("\n");
	
    system("pause");
 	return 0;
}
