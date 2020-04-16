#include<iostream>
#include "Student.h"
#include<vector>
#include<algorithm>
using namespace std;

void Input2Struct(student&);//��Ϣ¼��
int CheckYoN(vector<int>, int);
bool comp11(Student, Student);
bool comp12(Student, Student);
bool comp21(Student, Student);
bool comp22(Student, Student);


// Student ��� ���캯�� ͨ���ṹ�� student
Student::Student(student st)
{
	 _ID=st.ID;//ѧ��
	 _Name=st.Name;//����

	 _Chinese =st.Chinese;//���ĳɼ�
	 _Math=st.Math;//��ѧ�ɼ�
	 _English=st.English;//Ӣ��ɼ�

     _Physics=st.Physics;//������ɼ�
	 _Chemistry=st.Chemistry;//��ѧ�ɼ�
	 _Biology=st.Biology;//����ɼ�

	 _Sumscore = st.Chinese + st.Math + st.English + st.Physics + st.Chemistry + st.Biology;//�ܷ�
	 _Average = _Sumscore/6;//ƽ����
}

// Student ���캯��  �б���
Student::Student(int id, string name, double Chinese, double Math, double English, double physics, double chemistry, double biology)
{
	_ID = id;//ѧ��
	_Name = name;//����

	_Chinese = Chinese;//���ĳɼ�
	_Math = Math;//��ѧ�ɼ�
	_English = English;//Ӣ��ɼ�

	_Physics = physics;//������ɼ�
	_Chemistry = chemistry;//��ѧ�ɼ�
	_Biology = biology;//����ɼ�

	_Sumscore = Chinese+ Math+ English+ physics+ chemistry+ biology;//�ܷ�
	_Average = _Sumscore/6;//ƽ����
}
// Student �ĳ�Ա���� 1.GetID��2.GetName;
					//3.GetSumscore;4.GetAverage;
					//5.GetChinese;6.GetMath;7.GetEnglish;
					//8.GetPhysics;9.GetChemistry;10.GetBiology;
					//11.PrintOut  ��ӡ���˳ɼ���

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
	cout << "\t \t-|   ��    ��:\t |" << _Name << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|   ѧ    ��:\t |" << _ID << "\t\t|" << endl;

	cout << "\t \t-+---------------+----" << "\t\t|" << endl;

	cout << "\t \t-|���ĳɼ���\t |" << _Chinese << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|��ѧ�ɼ���\t |" << _Math << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|Ӣ��ɼ���\t |" << _English << "\t\t|" << endl;
	cout << "\t \t-|---------------|----" << "\t\t|" << endl;
	cout << "\t \t-|����ɼ���\t |" << _Physics << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|��ѧ�ɼ���\t |" << _Chemistry << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|����ɼ���\t |" << _Biology << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|ƽ �� �֣�\t |" << _Average << "\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;
	cout << "\t \t-|��    �֣�\t |" << _Sumscore << "\t\t|" << endl;
	cout << "\t \t-+---------------+----" << "\t\t|" << endl;		
}

/*
StudentSystem::StudentSystem(int maxnumber)
{
	MaxNumber = maxnumber;
}
*/

// StudentSystem �ĳ�Ա������1.InputInfor ¼��ɼ�����Ϣ  һ��һ������¼��
						   //2.PrintInfor ��ӡ�ɼ���
						   //3.SortOrder(int ,int ) �ɼ������� (1,1)��ѧ������;(1,2)��ѧ�Ž���;
															 //(2,1)���ɼ�����;(2,2)���ɼ�����
void StudentSystem::InputInfor() 
{
	cout<<"�������¼�������"<<endl;
	int NumberS;
	cin >> NumberS;
	vector<student> st(NumberS);
	//vector<Student> _ListStudent(NumberS);//ѧ����Ϣ����
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
				cout <<"���޴��ˣ�����������"<<endl;
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