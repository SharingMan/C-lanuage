#include<stdio.h>
#include<stdlib.h>
/*main()�м����Ա���*/
int main(int argc, char *argv[])
{
	int i;
	
	double sum=0;
	double avg=0;
	/*��ִ��ָ��ʱû�������ַ���ʱ*/
	if(argc==1)
	{
  		printf("����ָ�������ɼ�!!!\n");
	}
	
    else 
    {
    printf("���Ƴɼ�: "); 
    for(i=1; i<argc; i++)
    {
    	/*���ÿһ���ɼ��ַ���*/
        printf("%s ",argv[i]);
    	/*���ɼ��ַ���ת������������*/
   		sum+=atoi(argv[i]);/* ����atoi()����ת��Ϊ���� */ 
	}
	printf("\n-------------------------------------------\n");
	/*����ɼ��ܺͺ�ƽ��*/
 	printf("�������ܺ�=%.2f\n",sum);
	printf("����ƽ��=%.2f\n",sum/(argc-1));
     }
 	 system("pause");
     return 0;
}
