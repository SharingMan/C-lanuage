#include <iostream>
using namespace std;

class Square    //定义Square类别
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }//构造函数的定义 
    void squ_sum(Square b)
    {
     a=a+b.a;
     cout<<"两数的平方和: "<<a<<endl;
     }  //函数squ_sum程序代码实践
};

int main()
{
      int n1,n2;
      cout<<"输入第一个数:";
      cin>>n1;
      cout<<"输入第二个数:";
      cin>>n2;
      Square first(n1),second(n2);//对象声明与初始化 
      first.squ_sum(second);//调用first的成员函数 
      
      system("pause");
      return 0;
}
