#include <iostream>
using namespace std;

class testN                 //�������
{	
	int no[20];                  
	int i;
public:       
	testN()             //���캯������ 
	{
		int i;
		for(i=0;i<10;i++)
			no[i]=i;
		cout << "���캯��ִ�����." << endl;
	}
	~testN()          //������������ 
	{
		cout << "��������������.\n��ʾ�������ݣ�";
		for(i=0;i<10;i++)
			cout << no[i] << " ";
		cout << "\n" <<"����������ִ�����." << endl;
	}
};
int show_result()
{
	testN test1;// �����뿪�����ǰ,���Զ�������������   
    return 0;          
}
int main()
{
  show_result(); //������testN�����ĺ���
  
  system("pause");
  return 0;
}
