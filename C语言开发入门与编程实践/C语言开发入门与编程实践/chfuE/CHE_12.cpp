#include <iostream>
using namespace std;

class Square    //����Square���
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }//���캯���Ķ��� 
    void squ_sum(Square b)
    {
     a=a+b.a;
     cout<<"������ƽ����: "<<a<<endl;
     }  //����squ_sum�������ʵ��
};

int main()
{
      int n1,n2;
      cout<<"�����һ����:";
      cin>>n1;
      cout<<"����ڶ�����:";
      cin>>n2;
      Square first(n1),second(n2);//�����������ʼ�� 
      first.squ_sum(second);//����first�ĳ�Ա���� 
      
      system("pause");
      return 0;
}
