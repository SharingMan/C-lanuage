#include <stdio.h>
#include <stdlib.h>
		
int main()
{
	int year=0;	 
     /*������������*/
	printf("�����빫Ԫ��:");
	scanf("%d", &year);  /*���빫Ԫ��*/ 
	if(year % 4 !=0)	 /*���year����4�ı���*/
	   printf("%d �겻�����ꡣ\n",year); /*����ʾyear��������*/
	else if(year % 100 ==0)  /*���year��100�ı���*/
        {
            if(year % 400 ==0)      /*��year��400�ı���*/
	   			printf("%d �������ꡣ\n",year); 
               /*��ʾyear������*/
			else      /*����*/
	   			printf("%d �겻�����ꡣ\n",year); 
            /*����ʾyear��������*/
		}	
    else  /*����*/
       printf("%d �������ꡣ\n",year); /*����ʾyear������*/
    
    system("pause");
    return 0;
}
