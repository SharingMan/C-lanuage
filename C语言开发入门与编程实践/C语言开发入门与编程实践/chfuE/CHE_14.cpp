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
void Three_number:: get3number()//�������������������ʵ����Ա����
{
   cout<<"�����������������м��Կո����: ";
   cin>>x>>y>>z;
   cout<<endl;
}
void  Three_number:: printsum()//�������������������ʵ����Ա����
{
   cout<<"�������ܺ�= "<<x+y+z;
}
int main()
{
   Three_number temp;
   temp.get3number();//������������
   temp.printsum();//��ӡ�������ܺ� 
   printf("\n"); 
   system("pause");
   return 0;
}
