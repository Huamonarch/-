#include<iostream>
#include"Student.h"
#include<vector>
using namespace std;
void showMenu();
int main()
{
	StudentSystem ss1;
	int h;
	while (1)
	{
		showMenu();
		cout << "请输入操作对应的序号 : ";
		cin >> h;
		cout << endl;
		switch (h)
		{
		case 1: ss1.PrintInfor(); break;
		case 2: ss1.Insert1Student(); break;
		case 3: 
			int id1;
			cout<<"请输入查询的学号："<<endl;
			cin >> id1;
			ss1.Find1Student(id1); 
		    break;
		case 4: 
			int id2;
			cout << "请输入待删学生的学号：" << endl;
			cin >> id2;
			ss1.Cance1Student(id2);
			break;
		case 5:
			int a, b;
			cout<<"按什么排序？学号请输入1，成绩请输入2"<<endl;
			cin >> a;
			cout << "升序还是降序？升序输入1，降序请输入2" << endl;
			cin >> b;
			ss1.SortOrder(a,b);
			break;
		case 6:ss1.InputInfor(); break;
		case 7: 
			ss1.ClearInfor();
			return 0;
			break;
		case 0: cout << "\n退出成功！"; return 0;
		default:cout << "\n输入序号有误！请输入正确的序号。" << endl;

		}
	}
}