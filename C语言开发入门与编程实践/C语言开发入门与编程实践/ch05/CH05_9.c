#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*����һ���ַ���*/
	char str[]="At the first God made the heaven and the earth."  
			   "And the earth was waste and without form; "
      		   "and it was dark on the face of the deep: "
           	   "and the Spirit of God was moving on the face of the waters.";
	char find[10];  
	int i,j, find_len=0, count=0;
    int index_num;
    printf("--------------------------------------\n");
	printf("%s\n",str);
    
    printf("������Ҫ�������ַ���:");
	/*�����ַ���*/
	scanf("%s",find);
	/*ȡ�������ַ����ĳ���*/
    while(find[find_len]!='\0')
    {
    	find_len++;/* ���㳤�� */ 
    }
    /*��ʼ�����ַ���*/
	for(i=0;str[i]!='\0';i++)
	{
		 if(str[i]==(find[0]) )
	     {
			 for(j=0;j<=find_len;j++)
			 {
				 if(str[i+j]==find[j])
					 continue;
				 else
					 break;
			 }
   		 	 if(j==find_len)
             {
        		printf("��%dλ���������ַ���\n",i);
   			 	count++;
		 	 }
		 }
	}
	printf("����%d�����ϵ��ַ���\n",count); 
    
    system("pause");                                
	return 0;
}
