#include <iostream>
using namespace std;

class Three_number
{
   int x;
   int y;
   int z;
public:
   void get3number();
   void printsum();
};
void Three_number:: get3number()//利用域操作符在类外面实践成员函数
{
   cout<<"请输入三个整数，中间以空格隔开: ";
   cin>>x>>y>>z;
   cout<<endl;
}
void  Three_number:: printsum()//利用域操作符在类外面实践成员函数
{
   cout<<"三数的总和= "<<x+y+z;
}
int main()
{
   Three_number temp;
   temp.get3number();//输入三个整数
   temp.printsum();//打印三数的总和 
   printf("\n"); 
   system("pause");
   return 0;
}
