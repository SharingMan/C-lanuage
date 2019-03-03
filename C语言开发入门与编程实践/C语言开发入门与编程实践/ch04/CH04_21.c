#include <stdio.h>
#include <stdlib.h>	
	
int main()
{
	char select;
	int g_num;
	double total, amount, discount;

	printf("请输入购买的商品代码x(电冰箱),y(冷气机),z(个人计算机)：");
	scanf("%c", &select);	                          /*输入字符并存入变量select*/
    printf("请输入购买数量：");
	scanf("%d", &g_num);	                          /*输入字符并存入变量select*/
    printf("---------------------------------------\n");
	switch(select)
	{
	case 'x':  
	case 'X':                                          /*如果select等于'x'或'X'*/
		total=10000*g_num;                             /*则计算电冰箱单价*购买数量*/
		break;                                         /*跳出switch*/
	case 'y': 
	case 'Y':                                          /*如果select等于'y'或'Y'*/
		total=15000*g_num;                             /*则计算冷气机单价*购买数量*/
		break;                                         /*跳出switch*/
	case 'z':  
	case 'Z':                                          /*如果select等于'z'或'Z'*/
		total=25000*g_num;                             /*则计算个人计算机单价*购买数量*/
		break;                                         /*跳出switch*/
	}
	if (total>=100000)                                  /*如果购买金额超过150000*/
		discount=total*0.15;                            /*则15%折扣*/
	else if (total>=50000)							    /*如果购买金额超过50000*/
		discount=total*0.1;                             /*则10%折扣*/
	else                                                /*低于50000*/
		discount=total*0.05;                            /*则5%折扣*/
	
	amount=total-discount;                              /*折扣后金额=总金额-折扣*/
	printf("总购买金额为： %.2f\n", total);      
	printf("折扣金额为： %.2f\n", discount); 
	printf("应付金额为： %.2f\n", amount);
	
    system("pause");
    return 0;	
}
