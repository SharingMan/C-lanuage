#include <iostream>
using namespace std;

char* getData(char*);//������ԭ������
int getData(int);
float getData(float);
double getData(double);

int main()
{
    char* cVal="���տƼ�";//���岻ͬ�������� 
    int iVal=2004;    
    float fVal=2.3f;    
    double dVal=2.123;  
      
    cout<<"ִ�� char* getData(char*)   => "<<getData(cVal)<<endl;
    cout<<"ִ�� int getData(int)       => "<<getData(iVal)<<endl;    
    cout<<"ִ�� float getData(float)   => "<<getData(fVal)<<endl;        
    cout<<"ִ�� double getData(double) => "<<getData(dVal)<<endl;            
    
    system("pause");
    return 0;
}
//�������غ��������� 
char* getData(char* cVal)
{
    return cVal;
}

int getData(int iVal)
{
    return iVal;
}

float getData(float fVal)
{
    return fVal;
}

double getData(double dVal)
{
    return dVal;
}
