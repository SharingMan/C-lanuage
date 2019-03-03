#include <iostream>
using namespace std;

char* getData(char*);//函数数原型重载
int getData(int);
float getData(float);
double getData(double);

int main()
{
    char* cVal="荣钦科技";//定义不同数据类型 
    int iVal=2004;    
    float fVal=2.3f;    
    double dVal=2.123;  
      
    cout<<"执行 char* getData(char*)   => "<<getData(cVal)<<endl;
    cout<<"执行 int getData(int)       => "<<getData(iVal)<<endl;    
    cout<<"执行 float getData(float)   => "<<getData(fVal)<<endl;        
    cout<<"执行 double getData(double) => "<<getData(dVal)<<endl;            
    
    system("pause");
    return 0;
}
//定义重载函数数内容 
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
