#include <iostream>                        // 含括头文件 
using namespace std;

int Int_swap(int &, int &); // Int_swap() 函数原型声明,以引用调用方式 

int main()                                      
{
     int Num1=10, Num2=20;     // 定义整数变量 Num_1、Num_2

     cout << "调用 Int_swap 函数前: "                 
     << "Num1= " << Num1 << " Num2= " << Num2; // 显示调用前Num1,Num2的值 
	 cout << endl;
     cout<<"----------------------------------------"<< endl;
	 Int_swap(Num1, Num2);  // 调用引用调用函数 Int_swap()
     cout<<"----------------------------------------"<< endl;
     cout << "调用 Int_swap 函数后: "     
     << "Num1= " << Num1 << " Num2= " << Num2; // 显示叫后Num1,Num2的值 
	 cout << endl;
	 cout<<"----------------------------------------"<< endl;
	 system("pause");
	 return 0;
	 
}

int Int_swap(int &N1, int &N2)  // 定义引用调用Int_swap 函数
{
	int Ntmp;// 定义整数变量 Ntmp

	Ntmp=N2;
	N2=N1;
	N1=Ntmp;// N1与N2的值交换 

    cout << "   Int_swap() 函数内: "              
    << "N1  = " << N1 << " N2  = " << N2;// 显示函数内Num1,Num2的值 
	cout << endl;
	return  0;
}
