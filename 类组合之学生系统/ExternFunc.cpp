#include<iostream>
#include "Student.h"
#include<vector>
#include<algorithm>

using namespace std;
// ����  ����Ҫ�ĺ���
void Input2Struct(student& );//��Ϣ¼��
int CheckYoN(vector<int>, int);
bool comp11(Student, Student);
bool comp12(Student , Student );
bool comp21(Student , Student );
bool comp22(Student , Student );
// ���� main()��Ҫ�ĺ���


//�ⲿ����
//��Ϣ¼��
void Input2Struct(student& L)
{
	cout << "������" << endl;
	cin >> L.Name;
	cout << "ѧ�ţ�" << endl;
	cin >> L.ID;
	while (L.ID <= 0)
	{
		cout << "ѧ�ŷǷ�������������ѧ�ţ�����������" << endl;
		cin >> L.ID;
	}
	cout << "���ĳɼ���" << endl;
	cin >> L.Chinese;
	while (L.Chinese < 0 || L.Chinese>150)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,150]��" << endl;
		cin >> L.Chinese;
	}
	cout << "��ѧ�ɼ���" << endl;
	cin >> L.Math;
	while (L.Math < 0 || L.Math>150)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,150]��" << endl;
		cin >> L.Math;
	}
	cout << "Ӣ��ɼ���" << endl;
	cin >> L.English;
	while (L.English < 0 || L.English>150)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,150]��" << endl;
		cin >> L.English;
	}
	cout << "����ɼ���" << endl;
	cin >> L.Physics;
	while (L.Physics < 0 || L.Physics>110)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,110]��" << endl;
		cin >> L.Physics;
	}
	cout << "��ѧ�ɼ���" << endl;
	cin >> L.Chemistry;
	while (L.Chemistry < 0 || L.Chemistry>100)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,100]��" << endl;
		cin >> L.Chemistry;
	}
	cout << "����ɼ���" << endl;
	cin >> L.Biology;
	while (L.Biology < 0 || L.Biology>90)
	{
		cout << "�ɼ��Ƿ�������������ɼ�����[0,90]��" << endl;
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
//�ⲿ���� 
//�������
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
	     cout << "      ѧ���ɼ�����ϵͳ\n\n";
	     cout << "      1.��ʾ����ѧ���ɼ�\n";
	     cout << "      2.�����Ϣ\n";
	     cout << "      3.��ѯ��Ϣ\n";
	     cout << "      4.ɾ����Ϣ\n";
	     cout << "      5.�ɼ�����\n";
	     cout << "      6.����¼����Ϣ\n";
	     cout << "      7.���������Ϣ���˳�ϵͳ\n";
	     cout << "      0.�˳�ϵͳ\n";
	     cout << "===============================\n";
	     cout << "                               \n";
	 }