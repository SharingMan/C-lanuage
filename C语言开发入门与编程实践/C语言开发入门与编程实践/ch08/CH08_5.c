#include<stdio.h>
#include<stdlib.h>

#define RESULT(r1,r2,h) ((((r1)+(r2))*(h))/2.0)/*�����꺯�� */

int main()
{	
	int r1,r2,h;
		
	/*�������εĸ���ֵ*/
	printf("�ϵ�=",&r1);
	scanf("%d",&r1);
	printf("�µ�=",&r2);
 	scanf("%d",&r2);
 	printf("��=",&h);
 	scanf("%d",&h);
 	/*���ú꺯��*/
 	printf("�������=%f\n",RESULT(r1,r2,h));
 	printf("ÿ������+2���");
    printf("�������=%f\n",RESULT(r1+2,r2+2,h+2));
    
    system("pause");
    return 0;	
}
