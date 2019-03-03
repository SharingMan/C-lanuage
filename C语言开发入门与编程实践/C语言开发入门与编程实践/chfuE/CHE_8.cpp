#include <iostream>
using namespace std;

class Student                 //声明Student类别
{
private:                       //声明私用数据成员
	char StuID[8];          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //公用数据成员
	void input_data()         //声明与定义成员函数
	{
	cout << "**请输入学号及各科成绩**" << endl;
	cout << "学号：";
	cin >> StuID;
	cout << "英文成绩："; //实践input_data函数
	cin >> Score_E;
	cout << "数学成绩：";
	cin >> Score_M;
    }
	void show_data()	       //声明成员函数
	{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "================================" << endl;//实践show_data函数
	cout << "学生学号：" << StuID << "" << endl; 
	cout << "总分是" << Score_T << "分,平均是" << Score_A << "分" << endl;
	cout << "================================" << endl;
    }
};

int main()
{
	Student stud1;               //声明Student类的对象
	stud1.input_data();           //调用input_data成员函数
	stud1.show_data();           //调用input_data成员函数
	
	system("pause");
	return 0;
}
