#pragma once

#include<vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	//주소를 받아오자!
	std::vector<Student*> students;
	//Student주소를 받아오자!
	//students는 vector클래스의 인스턴스. Lecture클래스가 사라지면 students사라지지만
	//Student 포인터가 가리키고 있는 원 주소에 있는 것들은 그대로 유지.

public:
	Lecture(const std::string &name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{

	}

	void assignTeacher(Teacher *const teacher_input)
	{
		teacher = teacher_input;
	}

	//*const student_input, teacher_input

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
		//&student_input!=&student[0]
		//주소를 갖고 오는 식으로 하면 점수 업데이트가 된다.
	}

	void study()
	{
		std::cout << m_name << "Study " << std::endl << std::endl;

		for (auto  & element : students)//auto 에 &를 안 넣으면 업데이트가 안된다.
			(*element).setIntel((*element).getIntel() + 1);//intelligence 올라간다.
		//de-referencing *element
		//element->setIntel(element->getIntel()+1);도 가능.
	}

	friend std::ostream & operator<< (std::ostream & out, const Lecture &lecture)
	{
		out << "Lecture name: " << lecture.m_name << std:: endl;
		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;
		//element 자체는 pointer니까 de-referencing.
		return out;

	}
};