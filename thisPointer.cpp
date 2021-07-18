#include<iostream>
using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value)
	{
		m_value += value;
		return *this;
	}

	Calc& sub(int value)
	{
		m_value -= value;
		return *this;
	}

	Calc& mult(int value)
	{
		m_value *= value;
		return *this;//*this는 자기 자신의 클래스 그 자체.
	}


	void print()
	{
		cout << m_value << endl;
	}
};


int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();
	
	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);*/
	//cal.print();


	return 0;

}