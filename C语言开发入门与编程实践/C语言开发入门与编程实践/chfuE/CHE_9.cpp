#include <iostream>
using namespace std;

class Student                 //�������
{
private:                       //˽�����ݳ�Ա
	int StuID;          
	float English,Math,Total,Average;
public:                        //���ú�����Ա
    Student(); //Ԥ�蹹�캯����Ҳ����ʡ��
	 Student(int id, float E, float M)         //�������캯��
	{
		StuID=id;              //ָ��StuID=����id
		English=E;            //ָ��English=����E
		Math=M;           //ָ��Math=����M
		Total = E + M;
		Average = (E + M)/2;
		cout << "-----------------------------------" << endl;
		cout << "ѧ��ѧ�ţ�" << StuID << "" << endl; 
		cout<<"Ӣ�ĳɼ�:"<<E<<endl;
        cout<<"��ѧ�ɼ�:"<<M<<endl;
		cout << "�ܷ���" << Total << "��,ƽ����" << Average << "��" << endl;
	}
};
int main()
{
	Student stud1(920101,80,90);    //����stud1�����ʼֵ
	Student stud2(920102,60,70);    //����stud2�����ʼֵ
	cout << "-----------------------------------" << endl;
	
    system("pause");
	return 0;
}
