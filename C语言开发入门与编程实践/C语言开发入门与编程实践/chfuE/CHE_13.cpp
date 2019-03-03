#include <iostream>
using namespace std;

class Square    //定义Square类
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }//构造函数的定义 
    Square squ_sum(Square b)
    {
     this->a=this->a+b.a;
     return *this;//返回值为对象,通过this指针返回Square类对象
     }  
     int show_data()
    {
      cout<<(*this).a<<endl;//打印私有数据成员a的值 
      return 0;
    }
};

int main()
{
      int n1,n2;
      
      cout<<"输入第一个数:";
      cin>>n1;
      cout<<"输入第二个数:";
      cin>>n2;
      Square first(n1),second(n2),third(0);//对象声明与初始化 
      third=first.squ_sum(second);//调用first的成员函数,并返回Square对象 
      third.show_data();//直接以成员函数打印结果 
      
      system("pause");
      return 0;
}
