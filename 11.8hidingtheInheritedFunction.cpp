#include<iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream &operator<<(std::ostream & out, const Base &b)
	{
		cout << "This is base output" << endl;
		return out;
	}
};


class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value)
	{}



	friend std::ostream &operator<<(std::ostream & out, const Derived &b)
	{
		cout << static_cast<Base>(b) << endl;
		//static cast를 해서 위의 This is base output 이 나온다.

		cout << "This is derived output" << endl;
		return out;
	}

	using Base::m_i;
	//그러면 m_i는 derived 안에서는 public이 된다.
private:
	using Base::print;//괄호 치면 안됨.
	//print를 private화 해버리면 부모는 쓸 수 있어도 자식은 쓸 수 없게 됨.

	//void print() = delete;
	//여기서 delete을 해보면 자식에서는 쓸 수 없게 됨. 부모만 쓸 수 있게 됨.
	


};

int main()
{
	Base base(5);
	base.print();
	cout << base << endl;

	Derived derived(7);
	cout << derived;
	derived.m_i=1024;
	
	//derived.print();

	return 0;
}