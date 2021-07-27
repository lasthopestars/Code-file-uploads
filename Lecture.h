#pragma once

#include<vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	//�ּҸ� �޾ƿ���!
	std::vector<Student*> students;
	//Student�ּҸ� �޾ƿ���!
	//students�� vectorŬ������ �ν��Ͻ�. LectureŬ������ ������� students���������
	//Student �����Ͱ� ����Ű�� �ִ� �� �ּҿ� �ִ� �͵��� �״�� ����.

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
		//�ּҸ� ���� ���� ������ �ϸ� ���� ������Ʈ�� �ȴ�.
	}

	void study()
	{
		std::cout << m_name << "Study " << std::endl << std::endl;

		for (auto  & element : students)//auto �� &�� �� ������ ������Ʈ�� �ȵȴ�.
			(*element).setIntel((*element).getIntel() + 1);//intelligence �ö󰣴�.
		//de-referencing *element
		//element->setIntel(element->getIntel()+1);�� ����.
	}

	friend std::ostream & operator<< (std::ostream & out, const Lecture &lecture)
	{
		out << "Lecture name: " << lecture.m_name << std:: endl;
		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;
		//element ��ü�� pointer�ϱ� de-referencing.
		return out;

	}
};