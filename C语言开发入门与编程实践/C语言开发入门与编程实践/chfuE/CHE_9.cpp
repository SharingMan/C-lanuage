#include <iostream>
using namespace std;

class Student                 //声明类别
{
private:                       //私用数据成员
	int StuID;          
	float English,Math,Total,Average;
public:                        //公用函数成员
    Student(); //预设构造函数，也可以省略
	 Student(int id, float E, float M)         //声明构造函数
	{
		StuID=id;              //指定StuID=参数id
		English=E;            //指定English=参数E
		Math=M;           //指定Math=参数M
		Total = E + M;
		Average = (E + M)/2;
		cout << "-----------------------------------" << endl;
		cout << "学生学号：" << StuID << "" << endl; 
		cout<<"英文成绩:"<<E<<endl;
        cout<<"数学成绩:"<<M<<endl;
		cout << "总分是" << Total << "分,平均是" << Average << "分" << endl;
	}
};
int main()
{
	Student stud1(920101,80,90);    //给予stud1物件初始值
	Student stud2(920102,60,70);    //给予stud2物件初始值
	cout << "-----------------------------------" << endl;
	
    system("pause");
	return 0;
}
