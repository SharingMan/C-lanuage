#include <iostream>          // ����ͷ�ļ� <iostream>
using namespace std;
int main()
{
	 int Num_1, Num_2, Tmp_Num;              // ������������ Num_1��Num_2��Tmp_Num

	 cout<<"���������(g.c.d):"<<endl;
	 cout<<"��������������:";
	 cin>>Num_1>>Num_2;              // �������� Num_1 �� Num_2 �������������ֵ

	 if (Num_1 < Num_2)                      // �������������ֵ Num_1 < Num_2
	 {                                       // ����������ֵ����(���� while �������)
		 Tmp_Num=Num_1;                           
		 Num_1=Num_2;
		 Num_2=Tmp_Num;
	 }

	 while (Num_2 != 0)                      // ʹ�� while ������շת�����
	 {                                       // �������� Num_1(�ϴ�ֵ) ���� Num_2
	 	Tmp_Num=Num_1 % Num_2;               // �������� Tmp_Num �洢����ֵ
		Num_1=Num_2;                              
		Num_2=Tmp_Num;
	 }
	  
	  cout<<"�������(g.c.d):"<<Num_1<<endl;  // ��ʾ���
       
   system("pause");
   return 0;
}
