#include <stdio.h>
#include <stdlib.h>
struct list              /*�����б�ṹ*/
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
	int data1[4]={3,0,4,2};         /*����ʽA��ϵ��*/
	int data2[4]={6,8,6,9};         /*����ʽB��ϵ��*/
	printf("ԭʼ����ʽ��\nA=");
	a=creat_link(data1);            /*��������ʽA*/
	b=creat_link(data2);            /*��������ʽB*/
	print_link(a);                  /*��ӡ����ʽA*/
	printf("B=");
	print_link(b);                  /*��ӡ����ʽB*/
	printf("����ʽ��ӽ����\nC=");
	c=sum_link(a,b);                /*CΪA��B����ʽ��ӽ��*/
	print_link(c);                  /*��ӡ����ʽC*/
	system("pause");
	return 0;
}
link creat_link(int data[4]) /*��������ʽ�ӳ���*/
{  
	int i;
	link head,newnode,ptr;
	for(i=0;i<4;i++)
	{  
		newnode=(link)malloc(sizeof(node));
		if(!newnode)
		{  
			printf("Error!! �ڴ�����ʧ��!!\n");
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
void print_link(link head)     /*��ӡ����ʽ�ӳ���*/
{  
	while(head!=NULL) 
	{  
		if(head->exp==1 && head->coef!=0)  /*X^1ʱ����ʾָ��*/
			printf("%dX + ",head->coef);
		else if(head->exp!=0 && head->coef!=0)
			printf("%dX^%d + ",head->coef,head->exp);
		else if(head->coef!=0) /*X^0ʱ����ʾ����*/
			printf("%d",head->coef);
		head=head->next;
	}
	printf("\n");
}
link sum_link(link a,link b)  /*����ʽ����ӳ���*/
{  
	int sum[4],i=0;
	
	
	while(a!=NULL)   /*�ж϶���ʽ*/
	{  
	           
		while(b!=NULL)
		{  
			if(a->exp==b->exp)  /*ָ����ȣ�ϵ�����*/
			{  
				sum[i]=a->coef+b->coef;
				a=a->next;
				b=b->next;
				i++;
			}
			else if(b->exp > a->exp) /*Bָ���ϴ�ָ��ϵ����C*/
			{  
				sum[i]=b->coef;
				b=b->next;
				i++;
			}
			else if(a->exp > b->exp) /*Aָ���ϴ�ָ��ϵ����C*/
			{  
					sum[i]=a->coef;
					a=a->next;
					i++;
				}
			}
		}
		return creat_link(sum);     /*������ӽ���б�C*/
	}
