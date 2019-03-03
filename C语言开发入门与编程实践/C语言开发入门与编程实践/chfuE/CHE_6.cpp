#include<iostream>

using namespace std;

//内联函数定义 
inline int fun1(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"请输入三个数字:";
	cin>>a>>b>>c;

 
 	if(fun1(a,b,c)%2==0)	//调用内联函数 
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"为偶数"<<endl; 
 	else
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"为奇数"<<endl; 
    
    system("pause"); 
    return 0;
}
