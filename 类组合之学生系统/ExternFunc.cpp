#include<iostream>
#include "Student.h"
#include<vector>
#include<algorithm>

using namespace std;
// 声明  类需要的函数
void Input2Struct(student& );//信息录入
int CheckYoN(vector<int>, int);
bool comp11(Student, Student);
bool comp12(Student , Student );
bool comp21(Student , Student );
bool comp22(Student , Student );
// 声明 main()需要的函数


//外部函数
//信息录入
void Input2Struct(student& L)
{
	cout << "姓名：" << endl;
	cin >> L.Name;
	cout << "学号：" << endl;
	cin >> L.ID;
	while (L.ID <= 0)
	{
		cout << "学号非法，请重新输入学号：（正整数）" << endl;
		cin >> L.ID;
	}
	cout << "语文成绩：" << endl;
	cin >> L.Chinese;
	while (L.Chinese < 0 || L.Chinese>150)
	{
		cout << "成绩非法，请重新输入成绩：（[0,150]）" << endl;
		cin >> L.Chinese;
	}
	cout << "数学成绩：" << endl;
	cin >> L.Math;
	while (L.Math < 0 || L.Math>150)
	{
		cout << "成绩非法，请重新输入成绩：（[0,150]）" << endl;
		cin >> L.Math;
	}
	cout << "英语成绩：" << endl;
	cin >> L.English;
	while (L.English < 0 || L.English>150)
	{
		cout << "成绩非法，请重新输入成绩：（[0,150]）" << endl;
		cin >> L.English;
	}
	cout << "物理成绩：" << endl;
	cin >> L.Physics;
	while (L.Physics < 0 || L.Physics>110)
	{
		cout << "成绩非法，请重新输入成绩：（[0,110]）" << endl;
		cin >> L.Physics;
	}
	cout << "化学成绩：" << endl;
	cin >> L.Chemistry;
	while (L.Chemistry < 0 || L.Chemistry>100)
	{
		cout << "成绩非法，请重新输入成绩：（[0,100]）" << endl;
		cin >> L.Chemistry;
	}
	cout << "生物成绩：" << endl;
	cin >> L.Biology;
	while (L.Biology < 0 || L.Biology>90)
	{
		cout << "成绩非法，请重新输入成绩：（[0,90]）" << endl;
		cin >> L.Biology;
	}
}
int CheckYoN(vector<int>Listid, int id)
{
	for (int j = 0; j < Listid.size(); j++)
	{
		if (Listid[j] == id)
		{
			return 1;
		}
	}
	return 0;
}
//外部函数 
//排序规则
bool comp11(Student a, Student b)
{
	return a.GetID() < b.GetID();
}
bool comp12(Student a, Student b)
{
	return a.GetID() > b.GetID();
}
bool comp21(Student a, Student b)
{
	return a.GetSumscore() < b.GetSumscore();
}
bool comp22(Student a, Student b)
{
	return a.GetSumscore() > b.GetSumscore();
}
void showMenu()
 {
	     cout << "                               \n";
	     cout << "===============================\n";
	     cout << "      学生成绩管理系统\n\n";
	     cout << "      1.显示所有学生成绩\n";
	     cout << "      2.添加信息\n";
	     cout << "      3.查询信息\n";
	     cout << "      4.删除信息\n";
	     cout << "      5.成绩排序\n";
	     cout << "      6.批量录入信息\n";
	     cout << "      7.清空所有信息并退出系统\n";
	     cout << "      0.退出系统\n";
	     cout << "===============================\n";
	     cout << "                               \n";
	 }