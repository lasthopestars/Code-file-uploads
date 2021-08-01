#include<iostream>
#include<string>
using namespace std;

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

	virtual void speak() const//virtual 중요!!!!!!!!!!!!!!!!!!!!!!
	{
		cout << m_name << "???" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
		:Animal(name)//생성자는 Animal 생성자 사용.
	{

	}

	void speak() const
	{
		cout << m_name << "Meow " << endl;
	}

};

class Dog :public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{

	}

	void speak() const
	{
		cout << m_name << "Woof " << endl;
	}

};

int main()
{
	/*Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();

	Animal *ptr_animal1 = &cat;
	Animal *ptr_animal2 = &dog;


	ptr_animal1->speak();
	ptr_animal2->speak();
	//자식 클래스를 부모 클래스의 포인터를 이용해 캐스팅을 시켜놓고 호출을 하면
	//자기가 부모 클래스인 줄 알고 작동.
	*/


	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"),Cat("cat5") };
	Dog dogs[] = { Dog("Dog1"), Dog("Dog2") };

	//for 문으로 쫙 돌리고 싶으면 어떻게 함?
	//초보때는 for문으로 해도 되지만 전문 프로그래머처럼 하고 싶으면 animal pointer로 쫙 하나로 묶자

	Animal *my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
	&dogs[0], &dogs[1]};//같은 부모 cats dogs

	for (int i = 0; i < 7; ++i)
		my_animals[i]->speak();

	//speak 클래스를 virtual 로 바꾸면 woof 랑 meow 나옴.
	//pointer는 부모 클래스 타입 포인터인데 자식 클래스인것처럼 행동함!


}