#include <iostream>                             
using namespace std;

int main()
{
     int *ptr_1=new int;           // ���� *ptr_1 ָ�룬���� new �����ڴ�
	 int *ptr_2=new int;           // ���� *ptr_2 ָ�룬���� new �����ڴ�

	 cout << "���뱻����:";
	 cin >> *ptr_1;                        // *ptr_1 �洢������
	 cout << "�������  :";
	 cin >> *ptr_2;                       // *ptr_2 �洢����

	 cout << *ptr_1 << " + " << *ptr_2 << " = ";
	 cout << *ptr_1+*ptr_2;             // �����ܺ�
	 
     cout << endl;                     // ����

	 delete ptr_1;                   // �ͷ����ø� ptr_1 ���ڴ�ռ�
	 delete ptr_2;                   // �ͷ����ø� ptr_2 ���ڴ�ռ�
	 
	 system("pause");
	 return 0;
}
