#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	
	printf("��������ѧ�ɼ�?");
	scanf("%d",&score);

	if ( score>60 ) 
		goto pass;		  // �ҵ��������Ϊ"pass"�ĳ���������ִ�г���.
	else
		goto nopass;	  // �ҵ��������Ϊ"nopass"�ĳ���������ִ�г���.	

	pass:               //pass��ǩ
	printf("��ѧ����!\n");       
	goto TheEnd;         // �ҵ��������Ϊ"TheEnd"�ĳ���������ִ�г���.

	nopass:           //nopass��ǩ
	printf("��ѧ�ɼ�������!\n");

	TheEnd:  
    printf("---------------------------------\n");
    printf("ͳ�����!\n");  //TheEnd��ǩ
	
	system("pause");
    return 0;
}
