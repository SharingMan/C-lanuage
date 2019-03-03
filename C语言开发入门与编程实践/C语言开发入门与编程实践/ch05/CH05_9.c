#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*声明一个字符串*/
	char str[]="At the first God made the heaven and the earth."  
			   "And the earth was waste and without form; "
      		   "and it was dark on the face of the deep: "
           	   "and the Spirit of God was moving on the face of the waters.";
	char find[10];  
	int i,j, find_len=0, count=0;
    int index_num;
    printf("--------------------------------------\n");
	printf("%s\n",str);
    
    printf("请输入要搜索的字符串:");
	/*输入字符串*/
	scanf("%s",find);
	/*取得搜索字符串的长度*/
    while(find[find_len]!='\0')
    {
    	find_len++;/* 计算长度 */ 
    }
    /*开始搜索字符串*/
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
        		printf("在%d位置搜索到字符串\n",i);
   			 	count++;
		 	 }
		 }
	}
	printf("共有%d个符合的字符串\n",count); 
    
    system("pause");                                
	return 0;
}
