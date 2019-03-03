#include <iostream>
using namespace std;

class Student                 
{
		friend float add_score(Student);        //声明add_score函数为友元函数
		private:                       
			int StuID;          
			float Score_E, Score_M, Score_T;
		public:                        
			Student(int id,float E,float M)         //声明构造函数
			{		
				StuID=id;              
				Score_E=E;             
				Score_M=M;             
				Score_T = Score_E + Score_M;
				cout << "学生学号：" << StuID << "" << endl; 
				cout << "总分是" << Score_T << "分" << endl;
			}	
};
float add_score(Student a)     //定义add_score函数
{
		a.Score_T+=30;
		return a.Score_T;
}
int main()
{
		Student stud1(920101,80,90);    //给予stud1物件初始值
		cout << "加30分后，总分为：" << add_score(stud1) << "分" << endl; //调用add_score函数
        system("pause");
		return 0;
}
