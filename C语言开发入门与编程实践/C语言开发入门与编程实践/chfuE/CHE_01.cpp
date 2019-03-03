#include <iostream> 
using namespace std;// 使用using指定要使用的空间名称 

int main()
{
	int a, b;
	
	cout<<"请输入两个数字:"<<endl;
	
	cin>>a>>b;// 由输入设备取得数据
	cout<<"a="<<a<<",b="<<b<<endl; // 输出两个数值 
	cout<<"------------------------------------------"<<endl;
	//利用cout函数做输出时，可以使用endl做跳行控制
    if(a>b)
		cout<<"a大于b"<<endl;
  	else
   		cout<<"a小于或等于b"<<endl; 
	cout<<"------------------------------------------"<<endl;
	
    system("pause");
    return 0;
}
