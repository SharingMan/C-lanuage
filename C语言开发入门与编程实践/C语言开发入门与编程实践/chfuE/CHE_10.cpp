#include <iostream>
using namespace std;

class MyClass //定义一个Class，名称为MyClass
{
public:       //存取层级为public(公开)
    MyClass()
    {
        cout<<"无任何参数传入的构造函数\n";    
    }
    
    MyClass(int a)
    {
        cout<<"传入一个参数值的构造函数\n";
    }
    
    MyClass(int a,int b)
    {
        cout<<"传入二个参数值的构造函数\n";    
    }    

private:
    // MyClass(){} 若重复定义，编译时将产生错误
};

int main()
{
    int a,b;
    /* 以指针类型的类对象 */ 
    MyClass* myClass1=new MyClass();
    MyClass* myClass2=new MyClass(a);
    MyClass* myClass3=new MyClass(a,b);
    
    cout<<"-------------------------------"<<endl;
    
    delete myClass3;   
    delete myClass2;   
    delete myClass1;   
    
    system("pause");
    return 0; 
}
