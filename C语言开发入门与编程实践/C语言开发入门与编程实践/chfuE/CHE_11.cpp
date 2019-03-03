#include <iostream>
using namespace std;

class testN                 //声明类别
{	
	int no[20];                  
	int i;
public:       
	testN()             //构造函数声明 
	{
		int i;
		for(i=0;i<10;i++)
			no[i]=i;
		cout << "构造函数执行完成." << endl;
	}
	~testN()          //析构函数声明 
	{
		cout << "析构函数被调用.\n显示数组内容：";
		for(i=0;i<10;i++)
			cout << no[i] << " ";
		cout << "\n" <<"析构函数已执行完成." << endl;
	}
};
int show_result()
{
	testN test1;// 对象离开程序块前,会自动调用析构函数   
    return 0;          
}
int main()
{
  show_result(); //调用有testN类对象的函数
  
  system("pause");
  return 0;
}
