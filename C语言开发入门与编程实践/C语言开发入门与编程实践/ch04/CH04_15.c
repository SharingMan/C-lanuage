#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1, new_pw, password=1234;            /*����password���������������Թ���֤*/

	while(i<=3)                                /*�������������Ϊ��*/
	{			
		printf("����������:");  
	    scanf("%d", &new_pw);
		if (new_pw != password)                /*��������������password��ͬ*/
		{
			printf("�������!!\n");    
			i++;                                     
			continue;                          /*����while��ʼ��*/
		}
		printf("������ȷ!!\n ");               /*������ȷ*/
		break;  		                       
	}  	
	if (i>3)
		printf("����������Σ�ȡ������!!\n"); 
           
	system("pause");
    return 0;
}
