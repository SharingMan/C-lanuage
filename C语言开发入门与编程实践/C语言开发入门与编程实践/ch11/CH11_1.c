#include<stdio.h>
#include<ctype.h>/*�����ַ�������ͷ�ļ�*/

int main()
{
	char ch1;
 	for( ;ch1!=' '; )
 	{
  		printf("��������һ�ַ�");
  		printf("(����ո��Ϊ����):");
 		/*��ȡ�ַ�*/
  		ch1=getch();
  		printf("\n");
  		/*��ĸ����*/
  		if(isalpha(ch1)) /* �ж��Ƿ�Ϊ�ַ� */ 
    	{
     		printf("%c�ַ�Ϊ��ĸ\n",ch1);
     		if(islower(ch1))
       			printf("����ĸת�ɴ�д:%c\n",toupper(ch1));
  			else
  				printf("����ĸת��Сд:%c\n",tolower(ch1));   		
		}
		/*���ֲ���*/
		else if(isdigit(ch1))/* �ж��Ƿ�Ϊ���� */ 
  		{
    		printf("%c�ַ�Ϊ����\n",ch1);
    	}
    	/*�������Ų���*/
    	else if(ispunct(ch1))/* �ж��Ƿ�Ϊһ����� */ 
    		printf("%c�ַ�Ϊ����\n",ch1);
  	}
    
    system("pause");	
	return 0;
}
