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
		//static cast�� �ؼ� ���� This is base output �� ���´�.

		cout << "This is derived output" << endl;
		return out;
	}

	using Base::m_i;
	//�׷��� m_i�� derived �ȿ����� public�� �ȴ�.
private:
	using Base::print;//��ȣ ġ�� �ȵ�.
	//print�� privateȭ �ع����� �θ�� �� �� �־ �ڽ��� �� �� ���� ��.

	//void print() = delete;
	//���⼭ delete�� �غ��� �ڽĿ����� �� �� ���� ��. �θ� �� �� �ְ� ��.
	


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