#include<iostream>
#include<vector>
#include<string>
#include"Lecture.h"


int main()
{
	using namespace std;

	Lecture lec1("Introduction to Computer Programming");
	Lecture lec2("Computational Thinking");

	Student std1("JackJack", 0);
	//���� �޸𸮿� �ִ� �͵��� �ּҸ� ������ ����.
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	//���� �Լ����� ������ ����(��� ����)
	//2. �ٸ� �Լ����� ����� �� ���� �Ҵ����� ����,
	//�Ȱ��� ��� ����


	Student *std11 = new Student("Jack Jack", 0);
	Student *std22 = new Student("Dash", 1);
	Student *std33 = new Student("Violet", 2);

	Teacher *teacher11 = new Teacher("Prof.Hong");
	Teacher *teacher22 = new Teacher("Prof.Good");


	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();//���� �ɷ� 1�� �ö�.


		cout << lec1 << endl;//lec1�� ���� �����
		cout << lec2 << endl;//lec2�� ���� ������ ���� intelligence�� ������.
		//���� ������. &�� �����ͼ�.
	}

	delete std11;//�����Ҵ��� �� ��������.
	delete std22;
	delete std33;
	delete teacher11;
	delete teacher22;

	return 0;
}