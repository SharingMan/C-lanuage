#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score1=78,score2=69,score3=92;
	int sum=0;
	
 	sum=score1+score2+score3;
 	printf("�ܷ�Ϊ: %d\n",sum);
 	printf("ԭ����ƽ���ɼ�Ϊ: %d\n",sum/3);/*��ת����������*/
 	/*ǿ��ת����������*/
 	printf("ǿ��ת�����ƽ���ɼ�Ϊ: %f\n",(float)sum/3);
 	
    system("pause");
    return 0;
}
