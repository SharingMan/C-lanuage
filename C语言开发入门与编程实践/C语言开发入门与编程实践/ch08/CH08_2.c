#include<stdio.h>
#include<stdlib.h>

/*������ֺ�����*/
#define PI 3.14159
#define SHOW "Բ���=" 
#define  RESULT r*r*PI

int main(void)
{	
	int r;
	
    printf("������Բ�뾶:");
 	scanf("%d",&r);
    printf(SHOW"%f\n",RESULT);
    #undef PI /*����궨��*/
     system("pause");
     return 0;	
}
