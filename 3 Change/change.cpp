#include<stdio.h>
void main()
{
	int pri1,pri2;

	//The amount of  payable money:

	printf("please input your payable money:\n");
	scanf("%d",&pri1);
	printf("The amount payable is %d:\n",pri1);

	//The amount of your money:
	printf("please input your money:\n");
	scanf("%d",&pri2);
	printf("The  your amount of money is %d :\n",pri2);

	//compare

	if(pri2>=pri1)
	{
		printf("Should give your change:%d \n",pri2-pri1);
	}
	else
	{

	printf("your money is unenough.\n");
	}
	getchar();

}