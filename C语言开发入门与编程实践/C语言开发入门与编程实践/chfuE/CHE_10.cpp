#include <iostream>
using namespace std;

class MyClass //����һ��Class������ΪMyClass
{
public:       //��ȡ�㼶Ϊpublic(����)
    MyClass()
    {
        cout<<"���κβ�������Ĺ��캯��\n";    
    }
    
    MyClass(int a)
    {
        cout<<"����һ������ֵ�Ĺ��캯��\n";
    }
    
    MyClass(int a,int b)
    {
        cout<<"�����������ֵ�Ĺ��캯��\n";    
    }    

private:
    // MyClass(){} ���ظ����壬����ʱ����������
};

int main()
{
    int a,b;
    /* ��ָ�����͵������ */ 
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
