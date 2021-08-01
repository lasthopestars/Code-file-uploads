#include<iostream>
using namespace std;

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		:m_value(value)
	{


	}
};

class Derived : public Base
{
public:
	Derived(int value)
		:Base(value)
	{

	}

	void setValue(int value)
	{
		Base::m_value = value;
		//protected로 부모 클래스가 해주면 바로 접근 가능.
	}
};

int main()
{
	return 0;
}