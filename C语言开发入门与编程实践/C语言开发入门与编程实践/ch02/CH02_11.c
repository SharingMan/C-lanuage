#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a,b;
    a=b=5;/*����a,b��ֵ*/ 
 	/*���ø��ϸ�ֵ������,����������ʽ*/
     printf("a=%d , b=%d \n",a,b);
     
     a+=5; 
 	 b*=6;
     printf("a+=5,b*=6 \n"); 
     printf("a����ֵΪ%d, b����ֵΪ %d\n",a,b);
     
  	 /* ���ϸ�ֵ�������Ķ������ */
  	 a+=a+=b+=b%=4;
     printf("a+=a+=b+=b%%=4 ��ֵΪ %d \n",a);
     
     system("pause");
     return 0;
}
