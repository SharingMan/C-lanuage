#include <iostream>
using namespace std;

class Student                 //����Student���
{
private:                       //����˽�����ݳ�Ա
	char StuID[8];          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //�������ݳ�Ա
	void input_data()         //�����붨���Ա����
	{
	cout << "**������ѧ�ż����Ƴɼ�**" << endl;
	cout << "ѧ�ţ�";
	cin >> StuID;
	cout << "Ӣ�ĳɼ���"; //ʵ��input_data����
	cin >> Score_E;
	cout << "��ѧ�ɼ���";
	cin >> Score_M;
    }
	void show_data()	       //������Ա����
	{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "================================" << endl;//ʵ��show_data����
	cout << "ѧ��ѧ�ţ�" << StuID << "" << endl; 
	cout << "�ܷ���" << Score_T << "��,ƽ����" << Score_A << "��" << endl;
	cout << "================================" << endl;
    }
};

int main()
{
	Student stud1;               //����Student��Ķ���
	stud1.input_data();           //����input_data��Ա����
	stud1.show_data();           //����input_data��Ա����
	
	system("pause");
	return 0;
}
