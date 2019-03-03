#include <stdio.h>
#include <stdlib.h>
struct list              /*声明列表结构*/
{  
	int coef,exp;
	struct list *next;
};
typedef struct list node;
typedef node *link;
link creat_link(int data[4]);
void print_link(link head);
link sum_link(link a,link b);
int main()
{  
	link a,b,c;
	int data1[4]={3,0,4,2};         /*多项式A的系数*/
	int data2[4]={6,8,6,9};         /*多项式B的系数*/
	printf("原始多项式：\nA=");
	a=creat_link(data1);            /*建立多项式A*/
	b=creat_link(data2);            /*建立多项式B*/
	print_link(a);                  /*打印多项式A*/
	printf("B=");
	print_link(b);                  /*打印多项式B*/
	printf("多项式相加结果：\nC=");
	c=sum_link(a,b);                /*C为A、B多项式相加结果*/
	print_link(c);                  /*打印多项式C*/
	system("pause");
	return 0;
}
link creat_link(int data[4]) /*建立多项式子程序*/
{  
	int i;
	link head,newnode,ptr;
	for(i=0;i<4;i++)
	{  
		newnode=(link)malloc(sizeof(node));
		if(!newnode)
		{  
			printf("Error!! 内存配置失败!!\n");
			exit(i);
		}
		if(i==0)
		{  
			newnode->coef=data[i];
			newnode->exp=3-i;
			newnode->next=NULL;
			head=newnode;
			ptr=head;
		}
		else if(data[i]!=0)
		{  
			newnode->coef=data[i];
			newnode->exp=3-i;
			newnode->next=NULL;
			ptr->next=newnode;
			ptr=newnode;
		}
	}
	return head;
}
void print_link(link head)     /*打印多项式子程序*/
{  
	while(head!=NULL) 
	{  
		if(head->exp==1 && head->coef!=0)  /*X^1时不显示指数*/
			printf("%dX + ",head->coef);
		else if(head->exp!=0 && head->coef!=0)
			printf("%dX^%d + ",head->coef,head->exp);
		else if(head->coef!=0) /*X^0时不显示变量*/
			printf("%d",head->coef);
		head=head->next;
	}
	printf("\n");
}
link sum_link(link a,link b)  /*多项式相加子程序*/
{  
	int sum[4],i=0;
	
	
	while(a!=NULL)   /*判断多项式*/
	{  
	           
		while(b!=NULL)
		{  
			if(a->exp==b->exp)  /*指数相等，系数相加*/
			{  
				sum[i]=a->coef+b->coef;
				a=a->next;
				b=b->next;
				i++;
			}
			else if(b->exp > a->exp) /*B指数较大，指定系数给C*/
			{  
				sum[i]=b->coef;
				b=b->next;
				i++;
			}
			else if(a->exp > b->exp) /*A指数较大，指定系数给C*/
			{  
					sum[i]=a->coef;
					a=a->next;
					i++;
				}
			}
		}
		return creat_link(sum);     /*建立相加结果列表C*/
	}
