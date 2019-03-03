#include <iostream>          // 含括头文件 <iostream>
using namespace std;
int main()
{
	 int Num_1, Num_2, Tmp_Num;              // 定义整数变量 Num_1、Num_2、Tmp_Num

	 cout<<"求最大公因子(g.c.d):"<<endl;
	 cout<<"输入两个正整数:";
	 cin>>Num_1>>Num_2;              // 整数变量 Num_1 与 Num_2 除存输入的整数值

	 if (Num_1 < Num_2)                      // 若输入的整数数值 Num_1 < Num_2
	 {                                       // 则将两变量的值交换(方便 while 语句运算)
		 Tmp_Num=Num_1;                           
		 Num_1=Num_2;
		 Num_2=Tmp_Num;
	 }

	 while (Num_2 != 0)                      // 使用 while 语句进行辗转相除法
	 {                                       // 整数变量 Num_1(较大值) 除以 Num_2
	 	Tmp_Num=Num_1 % Num_2;               // 整数变量 Tmp_Num 存储余数值
		Num_1=Num_2;                              
		Num_2=Tmp_Num;
	 }
	  
	  cout<<"最大公因子(g.c.d):"<<Num_1<<endl;  // 显示结果
       
   system("pause");
   return 0;
}
