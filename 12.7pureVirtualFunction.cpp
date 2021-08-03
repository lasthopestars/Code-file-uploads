#include<iostream>
#include<string>
using namespace std;

//���� �����Լ�:body �� ��� �ڽ��� overriding �ؾ� ��.
//�߻� Ŭ����: ���� ���� �Լ��� ������ �� Ŭ����
//�������̽� Ŭ����: ���� �����Լ��θ� �̷���� Ŭ����

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		:m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const = 0;
	//pure virtual funtion
	//���� �θ� Ŭ���������� ��� �ؾ� �� �� �𸣰����� �ڽ� Ŭ���������� �ݵ�� �����ض�


};

/*
void Animal::speak() const //he body of the pure virtual function
{
	cout<< m_name << "???" << endl;
}

*/
class Cat : public Animal
{
public:
	Cat(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Meow" << endl;
	}
};


class Cow : public Animal
{
public:
	Cow(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "moo" << endl;
	}
};


class Dog : public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Woof" << endl;
	}
};


int main()
{
	//Animal ani("Hi");//abstract Ŭ���� (pure virtual function�� �ϳ��� �� Ŭ������ ����) �̶� �ȵ�.
	//abstract Ŭ������ object �� �����.

	//Cow cow("hello");-> animal�� �ִ� speak �� pure virtual function�̶�.
	//�ڽ� Ŭ�������� speak override �� ���ָ� ���� ���� �����.

	//overriding �����Ϸ��� virtual �־��.

	Cow cow("hello");
	cow.speak();

	
	return 0;
}