#include <stdio.h>
#include <stdlib.h>
 
int main()
{ 
	/* �����ά�������� Score[10]�����趨��ʼֵ */
	int Score[2][5]={ 77, 85, 73, 64, 91, 68, 89, 79, 94, 83 };            
    int Class, Student, Total;                /* ������������ Class, Student, Total */
 
	for ( Class=0; Class < 2; Class++ )          /* ��״ for ѭ����ȡѧ������ */
    {
			Total=0;                                 /* ���������� Total ��0 */
			for ( Student=0; Student < 5; Student++)
        {
				/* ��ʾ����ѧ���ķ��������� */
			    printf("�� %d ��� %d ��ѧ���ɼ�:%d\n", Class+1, Student+1, Score[Class][Student]);    
			    Total+=Score[Class][Student];                      /* �����ܷ� */
			}
        
			printf("\n");
			printf("�� %d ��ѧ���ĳɼ��ܷ�: %d", Class+1, Total);  /* ��ӡ�����༶���ܷ� */
			printf("\n\n");
	}
    
    system("pause");
    return 0;
}
