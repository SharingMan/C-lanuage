#include<stdio.h>

void main()
{

	int hour1,hour2,minute1,minute2;

	printf("please input hour1 and minute1:\n");
	printf("please input hour2 and minute2:\n");
	scanf("%d %d",&hour1,&minute1);

	scanf("%d %d",&hour2,&minute2);

	int ih=hour2-hour1;//
	int in=minute2-minute1;

	if(in<0)//�������С��0����˵�������ʱ���ʱ�벻��һСʱ
	{
		in=in+60;
		ih--;
		
	}
	printf("Time difference is: %d hours %d minutes %",ih,in);

	
}
