#include <stdio.h>
#include <stdlib.h>	
	
int main()
{
	
	int score=0;	                        /*������������*/
	
	printf("���������ĳɼ�:");
	scanf("%d", &score);                    /*����ɼ�*/ 
	if(score>=60)	                        
	   printf("���Ƴɼ�����.\n");               
    else                                
       printf("���Ƴɼ�������.\n");                 
    
    system("pause");
    return 0;
}
