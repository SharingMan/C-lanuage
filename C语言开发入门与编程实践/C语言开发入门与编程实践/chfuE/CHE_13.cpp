#include <iostream>
using namespace std;

class Square    //����Square��
{
    int a;
public:
    Square(int n)
    {
      a=n*n;
    }//���캯���Ķ��� 
    Square squ_sum(Square b)
    {
     this->a=this->a+b.a;
     return *this;//����ֵΪ����,ͨ��thisָ�뷵��Square�����
     }  
     int show_data()
    {
      cout<<(*this).a<<endl;//��ӡ˽�����ݳ�Աa��ֵ 
      return 0;
    }
};

int main()
{
      int n1,n2;
      
      cout<<"�����һ����:";
      cin>>n1;
      cout<<"����ڶ�����:";
      cin>>n2;
      Square first(n1),second(n2),third(0);//�����������ʼ�� 
      third=first.squ_sum(second);//����first�ĳ�Ա����,������Square���� 
      third.show_data();//ֱ���Գ�Ա������ӡ��� 
      
      system("pause");
      return 0;
}
