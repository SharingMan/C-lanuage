#include<stdio.h>
#include<math.h>/*����matn.hͷ�ļ�*/

int main()
{
	double number;
	printf("������һ��double�������͵�����:");
    scanf("%lf",&number);
    /*������*/
   	  printf("%f�ľ���ֵ=%f\n",number,fabs(number));
   	  printf("%f�����������=%f\n",number,ceil(number));
   	  printf("%f��������ȥ��=%f\n",number,floor(number));
       printf("%f�������뷨��=%.0f\n",number,number);  
      	
 	system("pause");
    return 0;
}
