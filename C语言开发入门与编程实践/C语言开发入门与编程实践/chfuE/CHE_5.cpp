#include <iostream>                        // ����ͷ�ļ� 
using namespace std;

int Int_swap(int &, int &); // Int_swap() ����ԭ������,�����õ��÷�ʽ 

int main()                                      
{
     int Num1=10, Num2=20;     // ������������ Num_1��Num_2

     cout << "���� Int_swap ����ǰ: "                 
     << "Num1= " << Num1 << " Num2= " << Num2; // ��ʾ����ǰNum1,Num2��ֵ 
	 cout << endl;
     cout<<"----------------------------------------"<< endl;
	 Int_swap(Num1, Num2);  // �������õ��ú��� Int_swap()
     cout<<"----------------------------------------"<< endl;
     cout << "���� Int_swap ������: "     
     << "Num1= " << Num1 << " Num2= " << Num2; // ��ʾ�к�Num1,Num2��ֵ 
	 cout << endl;
	 cout<<"----------------------------------------"<< endl;
	 system("pause");
	 return 0;
	 
}

int Int_swap(int &N1, int &N2)  // �������õ���Int_swap ����
{
	int Ntmp;// ������������ Ntmp

	Ntmp=N2;
	N2=N1;
	N1=Ntmp;// N1��N2��ֵ���� 

    cout << "   Int_swap() ������: "              
    << "N1  = " << N1 << " N2  = " << N2;// ��ʾ������Num1,Num2��ֵ 
	cout << endl;
	return  0;
}
