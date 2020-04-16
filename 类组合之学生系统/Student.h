#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include<string>
#include<vector>
//声明：1.结构体 student
//      2.类     Student
//      3.类     Student System

using namespace std;

//结构体 student 的声明  
struct student
{
	int ID;//学号
	string Name;//姓名

	double Chinese;//语文成绩
	double Math;//数学成绩
	double English;//英语成绩

	double Physics;//语物理成绩
	double Chemistry;//化学成绩
	double Biology;//生物成绩
};

// 类 Student 的声明
class Student
{
public:
	 Student() {};//默认构造函数
	 Student(student);//结构体构造
	 Student(int, string, double, double, double, double, double, double);//列表构造函数
	 ~Student() {};//默认析构函数

	 int GetID();//获取学号
	 string GetName();//获取姓名

	 double GetSumscore();//获取总分
	 double GetAverage();//获取平均分

	 double GetChinese();//获取语文成绩
	 double GetMath();//获取数学成绩
	 double GetEnglish();//获取英语成绩

	 double GetPhysics();//获取语物理成绩
	 double GetChemistry();//获取化学成绩
	 double GetBiology();//获取生物成绩
	 void PrintOut();//打印个人成绩表
private:
	int _ID;//学号
	string _Name;//姓名

	double _Sumscore;//总分
	double _Average;//平均分

	double _Chinese;//语文成绩
	double _Math;//数学成绩
	double _English;//英语成绩

	double _Physics;//语物理成绩
	double _Chemistry;//化学成绩
	double _Biology;//生物成绩
};

//类 Student System 的声明
class StudentSystem
{
public:
	//StudentSystem(int) ;
	//~StudentSystem();
	void InputInfor();//信息录入
	void PrintInfor();//打印系统成绩表
	void SortOrder(int, int);//排序 （参数1，参数2）  参数1：{ 1 "按照学号",2 "按照总分"} ;
													//参数2：{1 "升序"，2 "降序"}
	void Find1Student(int);//查一个学生信息   （按学号）
	void Insert1Student();//增加一个学生信息
	void Cance1Student(int);//删除一个学生的信息
	void Change1Student(int);//更改一个学生的信息
	void ClearInfor(); //清空信息


private:
	int _NumberStudent;//系统学生人数
	vector<Student> _ListStudent;//学生信息向量
	//int CheckID(vector<Student>);//检查ID是否有相同
};

/*
StudentSystem::StudentSystem()
{
}

StudentSystem::~StudentSystem()
{
}
*/
#endif // !_STUDENT_H_
