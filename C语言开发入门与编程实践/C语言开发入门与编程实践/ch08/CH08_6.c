#include <stdio.h>                             
#include <stdlib.h> 

#define CHOICE 2                                  /* �����ʶ�� CHOICE */ 

#if CHOICE==1       /* ��� CHOICE==1,�����ʶ�� START Ϊ 11,
                      ��ʶ�� END Ϊ 20*/
  #define START 11                                
  #define END 20  
                                  
#elif CHOICE==2   /* ��� CHOICE==2,�����ʶ�� START Ϊ 21,
                               �����ʶ�� END Ϊ 30 */
  #define START 21                                
  #define END 30   
                                 
#else       /* ���ǰ���������������,�����ʶ�� START Ϊ 1,
                             �����ʶ�� START Ϊ 10*/
  #define START 1                                 
  #define END 10   
                                 
#endif                   /* ����Ԥ����ָ�� #if */

int main()                       
{
	 int Total=0,count; 
                                     /* ������������ Total */
	 for (count=START; count <= END; count++) /* for ѭ��ִ�мӷ����� */
	 {
		 printf("%d",count);
		 if (count < END) printf( " + ");          /* ����������� (count < END)����ʾ"+"���� */
		 Total+=count;
	 }
	  printf( "= %d",Total);                       /* ��ʾ�������� Total ��ֵ */
	  
      system("pause");
      return 0;                             
}
