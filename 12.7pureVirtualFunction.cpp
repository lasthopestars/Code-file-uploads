#include<iostream>
#include<string>
using namespace std;

//순수 가상함수:body 가 없어서 자식이 overriding 해야 함.
//추상 클래스: 순수 가상 함수가 포함이 된 클래스
//인터페이스 클래스: 순수 가상함수로만 이루어진 클래스

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
	//당장 부모 클래스에서는 어떻게 해야 할 지 모르겠지만 자식 클래스에서는 반드시 구현해라


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
	//Animal ani("Hi");//abstract 클래스 (pure virtual function이 하나라도 들어간 클래스를 뜻함) 이라서 안됨.
	//abstract 클래스는 object 못 만들어.

	//Cow cow("hello");-> animal에 있는 speak 가 pure virtual function이라.
	//자식 클래스에서 speak override 안 해주면 만들 수가 없어요.

	//overriding 강제하려면 virtual 넣어라.

	Cow cow("hello");
	cow.speak();

	
	return 0;
}