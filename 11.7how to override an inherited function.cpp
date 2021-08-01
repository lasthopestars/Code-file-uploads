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

	void print()
	{
		Base::print();
		cout << "I'm derived" << endl;
	}

	friend std::ostream &operator<<(std::ostream & out, const Derived &b)
	{
		cout << static_cast<Base>(b) << endl;
		//static cast를 해서 위의 This is base output 이 나온다.

		cout << "This is derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	cout << base << endl;

	Derived derived(7);
	cout << derived;

		return 0;
}