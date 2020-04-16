#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include<string>
#include<vector>
//������1.�ṹ�� student
//      2.��     Student
//      3.��     Student System

using namespace std;

//�ṹ�� student ������  
struct student
{
	int ID;//ѧ��
	string Name;//����

	double Chinese;//���ĳɼ�
	double Math;//��ѧ�ɼ�
	double English;//Ӣ��ɼ�

	double Physics;//������ɼ�
	double Chemistry;//��ѧ�ɼ�
	double Biology;//����ɼ�
};

// �� Student ������
class Student
{
public:
	 Student() {};//Ĭ�Ϲ��캯��
	 Student(student);//�ṹ�幹��
	 Student(int, string, double, double, double, double, double, double);//�б��캯��
	 ~Student() {};//Ĭ����������

	 int GetID();//��ȡѧ��
	 string GetName();//��ȡ����

	 double GetSumscore();//��ȡ�ܷ�
	 double GetAverage();//��ȡƽ����

	 double GetChinese();//��ȡ���ĳɼ�
	 double GetMath();//��ȡ��ѧ�ɼ�
	 double GetEnglish();//��ȡӢ��ɼ�

	 double GetPhysics();//��ȡ������ɼ�
	 double GetChemistry();//��ȡ��ѧ�ɼ�
	 double GetBiology();//��ȡ����ɼ�
	 void PrintOut();//��ӡ���˳ɼ���
private:
	int _ID;//ѧ��
	string _Name;//����

	double _Sumscore;//�ܷ�
	double _Average;//ƽ����

	double _Chinese;//���ĳɼ�
	double _Math;//��ѧ�ɼ�
	double _English;//Ӣ��ɼ�

	double _Physics;//������ɼ�
	double _Chemistry;//��ѧ�ɼ�
	double _Biology;//����ɼ�
};

//�� Student System ������
class StudentSystem
{
public:
	//StudentSystem(int) ;
	//~StudentSystem();
	void InputInfor();//��Ϣ¼��
	void PrintInfor();//��ӡϵͳ�ɼ���
	void SortOrder(int, int);//���� ������1������2��  ����1��{ 1 "����ѧ��",2 "�����ܷ�"} ;
													//����2��{1 "����"��2 "����"}
	void Find1Student(int);//��һ��ѧ����Ϣ   ����ѧ�ţ�
	void Insert1Student();//����һ��ѧ����Ϣ
	void Cance1Student(int);//ɾ��һ��ѧ������Ϣ
	void Change1Student(int);//����һ��ѧ������Ϣ
	void ClearInfor(); //�����Ϣ


private:
	int _NumberStudent;//ϵͳѧ������
	vector<Student> _ListStudent;//ѧ����Ϣ����
	//int CheckID(vector<Student>);//���ID�Ƿ�����ͬ
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
