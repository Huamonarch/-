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
		cout << "�����������Ӧ����� : ";
		cin >> h;
		cout << endl;
		switch (h)
		{
		case 1: ss1.PrintInfor(); break;
		case 2: ss1.Insert1Student(); break;
		case 3: 
			int id1;
			cout<<"�������ѯ��ѧ�ţ�"<<endl;
			cin >> id1;
			ss1.Find1Student(id1); 
		    break;
		case 4: 
			int id2;
			cout << "�������ɾѧ����ѧ�ţ�" << endl;
			cin >> id2;
			ss1.Cance1Student(id2);
			break;
		case 5:
			int a, b;
			cout<<"��ʲô����ѧ��������1���ɼ�������2"<<endl;
			cin >> a;
			cout << "�����ǽ�����������1������������2" << endl;
			cin >> b;
			ss1.SortOrder(a,b);
			break;
		case 6:ss1.InputInfor(); break;
		case 7: 
			ss1.ClearInfor();
			return 0;
			break;
		case 0: cout << "\n�˳��ɹ���"; return 0;
		default:cout << "\n�������������������ȷ����š�" << endl;

		}
	}
}