#include <iostream>
using namespace std;

class Student                 
{
		friend float add_score(Student);        //����add_score����Ϊ��Ԫ����
		private:                       
			int StuID;          
			float Score_E, Score_M, Score_T;
		public:                        
			Student(int id,float E,float M)         //�������캯��
			{		
				StuID=id;              
				Score_E=E;             
				Score_M=M;             
				Score_T = Score_E + Score_M;
				cout << "ѧ��ѧ�ţ�" << StuID << "" << endl; 
				cout << "�ܷ���" << Score_T << "��" << endl;
			}	
};
float add_score(Student a)     //����add_score����
{
		a.Score_T+=30;
		return a.Score_T;
}
int main()
{
		Student stud1(920101,80,90);    //����stud1�����ʼֵ
		cout << "��30�ֺ��ܷ�Ϊ��" << add_score(stud1) << "��" << endl; //����add_score����
        system("pause");
		return 0;
}
