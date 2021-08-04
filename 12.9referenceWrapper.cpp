#include<iostream>
#include<vector>
#include<functional>

using namespace std;


//부모 클래스보다는 자식 클래스가 정보를 갖는 경우가 더 많다.
//자식 클래스는 더 구체화된 경우에.

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived: public Base
{
public:
	int m_j = 0;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base &b) //다형성을 사용하려면 무조건 reference로 해줘야 한다. 안되면 그냥 복사가 되어버림.
{
	b.print();
}

int main()
{
	Derived d;
	Base b;
	/*
	b = d;
	
	//d만 가지고 있는 정보는 b에 담을 수 없다.
	//derived 자식 클래스에서 추가적인 정보가 추가될 수 있잖아.
	//자식 클래스는 m_i와 m_j 둘 다 가지고 있다.

	//base는 m_j에 대해서 못 아니까 담을 수가 없죠?

	b.print();
	//derived가 아니라 base로 실행이 됩니다.
	
	doSomething(d);*/

	//std::vector<Base&> my_vec;
	std::vector<std::reference_wrapper <Base>> my_vec;
	//my_vec는 Base의 reference를 저장하는 vector가 된다.

	my_vec.push_back(b);

	my_vec.push_back(d);

	for (auto &ele : my_vec)
		ele.get().print();
	//reference로부터 실제로 인스턴스 받아오려고 get() 해줍니다.

	return 0;
}