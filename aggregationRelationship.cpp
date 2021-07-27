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
	//같은 메모리에 있는 것들을 주소만 가지고 공유.
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

	//메인 함수에서 변수로 선언(상단 구현)
	//2. 다른 함수에서 사용할 때 동적 할당으로 구현,
	//똑같이 사용 가능


	Student *std11 = new Student("Jack Jack", 0);
	Student *std22 = new Student("Dash", 1);
	Student *std33 = new Student("Violet", 2);

	Teacher *teacher11 = new Teacher("Prof.Hong");
	Teacher *teacher22 = new Teacher("Prof.Good");


	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();//지적 능력 1씩 올라가.


		cout << lec1 << endl;//lec1에 속한 잭잭과
		cout << lec2 << endl;//lec2에 속한 잭잭이 같이 intelligence가 오를까.
		//같이 오른다. &로 가져와서.
	}

	delete std11;//동적할당은 꼭 지워주자.
	delete std22;
	delete std33;
	delete teacher11;
	delete teacher22;

	return 0;
}