#include<iostream>

using namespace std;

int fun1(int a, int b=2,int c=3);/* 参数默认值的设定 */
int main()
{
	//指定参数值 
 	fun1(1); /* a=1,b=2,c=3 */
 	//在调用函数时，仍有传递参数值的动作，优先于参数默认值
	fun1(3,5); /* a=1,b=5,c=3 */
	fun1(2,4,6); /* a=2,b=4,c=6 */
	
    system("pause");
    return 0;
}

int fun1(int a, int b,int c )
{
	cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<"\t";
	cout<<"a+b+c="<<a+b+c<<endl;
    
    return 0;
}
