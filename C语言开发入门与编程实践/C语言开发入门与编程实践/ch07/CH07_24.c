#include <stdio.h>
void hanoi(int, int, int, int);	/* �ݹ麯��ԭ������ */
int main()
{  
    int j;
    printf("����������������");
    scanf("%d", &j);		
    hanoi(j,1,2,3);
    
    system("pause");
    return 0;
}
    void hanoi(int n, int p1, int p2, int p3)
   	{  
         if (n==1)
         printf("���Ӵ� %d �Ƶ� %d\n", p1, p3);/* ֹͣ�ĳ���*/
         else
         {  
         hanoi(n-1, p1, p3, p2);/* ����ִ�еĹ��� */
         printf("���Ӵ� %d �Ƶ� %d\n", p1, p3);
         hanoi(n-1, p2, p1, p3);/* ����ִ�еĹ��� */	
   	 }
  	}
