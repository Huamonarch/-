#include<iostream>
#include "Student.h"
#include<vector>
#include<algorithm>
using namespace std;

void Input2Struct(student&);//信息录入
int CheckYoN(vector<int>, int);
bool comp11(Student, Student);
bool comp12(Student, Student);
bool comp21(Student, Student);
bool comp22(Student, Student);


// Student 类的 构造函数 通过结构体 student
Student::Student(student st)
{
	 _ID=st.ID;//学号
	 _Name=st.Name;//姓名

	 _Chinese =st.Chinese;//语文成绩
	 _Math=st.Math;//数学成绩
	 _English=st.English;//英语成绩

     _Physics=st.Physics;//语物理成绩
	 _Chemistry=st.Chemistry;//化学成绩
	 _Biology=st.Biology;//生物成绩

	 _Sumscore = st.Chinese + st.Math + st.English + st.Physics + st.Chemistry + st.Biology;//总分
	 _Average = _Sumscore/6;//平均分
}

// Student 构造函数  列表构造
Student::Student(int id, string name, double Chinese, double Math, double English, double physics, double chemistry, double biology)
{
	_ID = id;//学号
	_Name = name;//姓名

	_Chinese = Chinese;//语文成绩
	_Math = Math;//数学成绩
	_English = English;//英语成绩

	_Physics = physics;//语物理成绩
	_Chemistry = chemistry;//化学成绩
	_Biology = biology;//生物成绩

	_Sumscore = Chinese+ Math+ English+ physics+ chemistry+ biology;//总分
	_Average = _Sumscore/6;//平均分
}
// Student 的成员函数 1.GetID；2.GetName;
					//3.GetSumscore;4.GetAverage;
					//5.GetChinese;6.GetMath;7.GetEnglish;
					//8.GetPhysics;9.GetChemistry;10.GetBiology;
					//11.PrintOut  打印个人成绩单

int Student::GetID()
{
	return _ID;
}
string Student::GetName()
{
	return _Name;
}

double Student::GetSumscore()
{
	return _Sumscore;
}
double Student::GetAverage()
{
	return _Average;
}

double Student::GetChinese()
{
	return _Chinese;
}
double Student::GetMath()
{
	return _Math;
}
double Student::GetEnglish()
{
	return _English;
}

double Student::GetPhysics()
{
	return _Physics;
}
double Student::GetChemistry()
{
	return _Chemistry;
}
double Student::GetBiology()
{
	return _Biology;
}

void Student::PrintOut()
{
	cout << "\t \t-|   姓    名:\t |" << _Name << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|   学    号:\t |" << _ID << "\t\t|" << endl;

	cout << "\t \t-+---------------+----" << "\t\t|" << endl;

	cout << "\t \t-|语文成绩：\t |" << _Chinese << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|数学成绩：\t |" << _Math << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|英语成绩：\t |" << _English << "\t\t|" << endl;
	cout << "\t \t-|---------------|----" << "\t\t|" << endl;
	cout << "\t \t-|物理成绩：\t |" << _Physics << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|化学成绩：\t |" << _Chemistry << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|生物成绩：\t |" << _Biology << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|平 均 分：\t |" << _Average << "\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|总    分：\t |" << _Sumscore << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;		
}

/*
StudentSystem::StudentSystem(int maxnumber)
{
	MaxNumber = maxnumber;
}
*/

// StudentSystem 的成员函数：1.InputInfor 录入成绩单信息  一个一个输入录入
						   //2.PrintInfor 打印成绩单
						   //3.SortOrder(int ,int ) 成绩单排序 (1,1)按学号升序;(1,2)按学号降序;
															 //(2,1)按成绩升序;(2,2)按成绩降序
void StudentSystem::InputInfor() 
{
	cout<<"请输入待录入的人数"<<endl;
	int NumberS;
	cin >> NumberS;
	vector<student> st(NumberS);
	//vector<Student> _ListStudent(NumberS);//学生信息向量
	for (int i = 0; i < NumberS; i++)
	{
		Input2Struct(st[i]);
	}
	for (int j = 0; j < NumberS; j++)
	{
		_ListStudent.insert(_ListStudent.begin()+j,st[j]);
	}
}
void StudentSystem::PrintInfor()
{
	int numbers = _ListStudent.size();
	for (int i = 0; i < numbers; i++)
	{
		_ListStudent[i].PrintOut();
	}
}

void StudentSystem::SortOrder(int Id_Score, int Up_Down)//
{
	if (Id_Score == 1)
	{
		if (Up_Down==1)
		{
			sort(_ListStudent.begin(), _ListStudent.end(), comp11);
		}
		else
		{
			sort(_ListStudent.begin(), _ListStudent.end(), comp12);
		}
	}
	else
	{
		if (Up_Down==1)
		{
			sort(_ListStudent.begin(), _ListStudent.end(), comp21);
		}
		else
		{
			sort(_ListStudent.begin(), _ListStudent.end(), comp22);
		}
	}
}

void StudentSystem::Find1Student(int id)
{
	int SizeList = _ListStudent.size();
	vector<int>ListId(SizeList);
	int IndexNumber;
	for (int i = 0; i < SizeList; i++)
	{
		ListId[i] = _ListStudent[i].GetID();
	}
	int judge = 1;
	while (judge)
	{
		int CheckNum = CheckYoN(ListId, id);
			if (CheckNum==0)
			{
				cout <<"查无此人，请重新输入"<<endl;
				cin >> id;
			}
			else
			{
				for (int j = 0; j < SizeList; j++)
					{
						if (ListId[j]==id)
						{
							IndexNumber = j;
							_ListStudent[IndexNumber].PrintOut();
						}
					}
				judge = 0;
			}
	}
}
void StudentSystem::Insert1Student()
{
	student st1;
	Input2Struct(st1);
	_ListStudent.insert(_ListStudent.end(), st1);
}
void StudentSystem::Cance1Student(int id)
{
		for (int i = 0; i < _ListStudent.size(); i++)
			{
				if (_ListStudent[i].GetID()==id)
				{
					_ListStudent.erase(_ListStudent.begin()+i);
				}
			}
}
void StudentSystem:: Change1Student(int id)
{
	student st2;
	Input2Struct(st2);
	for (int i = 0; i < _ListStudent.size(); i++)
	{
		if (_ListStudent[i].GetID() == id)
		{
			_ListStudent[i]=st2;
		}
	}
}
void StudentSystem:: ClearInfor()
{
	_ListStudent.clear();
}