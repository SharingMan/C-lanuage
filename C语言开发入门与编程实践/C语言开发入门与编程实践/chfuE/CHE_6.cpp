#include<iostream>

using namespace std;

//������������ 
inline int fun1(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"��������������:";
	cin>>a>>b>>c;

 
 	if(fun1(a,b,c)%2==0)	//������������ 
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"Ϊż��"<<endl; 
 	else
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"Ϊ����"<<endl; 
    
    system("pause"); 
    return 0;
}
