#include<iostream>
#include<string> //引入两种字符串头文件 
#include<cstring> 

using namespace std;

int main()
{
	char ch[]="-->"; // C的字符串声明方式
	string firstname;  // C++的字符串声明方式
	string lastname; // C++的字符串声明方式
	string input1("请输入姓氏:");//声明设有初始值的字符串格式
	string input2="请输入名字:";//另一种声明设有初始值的字符串格式
	
    cout<<input1;
	cin>>lastname;
	cout<<input2;
	cin>>firstname;
    
	string fullname=lastname+ch+firstname;//字符串的串接运算 
	cout<<"您的全名为:"<<fullname<<endl;
	system("pause");
	return 0;	
}
