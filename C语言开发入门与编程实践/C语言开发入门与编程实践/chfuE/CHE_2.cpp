#include<iostream>
#include<string> //���������ַ���ͷ�ļ� 
#include<cstring> 

using namespace std;

int main()
{
	char ch[]="-->"; // C���ַ���������ʽ
	string firstname;  // C++���ַ���������ʽ
	string lastname; // C++���ַ���������ʽ
	string input1("����������:");//�������г�ʼֵ���ַ�����ʽ
	string input2="����������:";//��һ���������г�ʼֵ���ַ�����ʽ
	
    cout<<input1;
	cin>>lastname;
	cout<<input2;
	cin>>firstname;
    
	string fullname=lastname+ch+firstname;//�ַ����Ĵ������� 
	cout<<"����ȫ��Ϊ:"<<fullname<<endl;
	system("pause");
	return 0;	
}
