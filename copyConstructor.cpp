#include<iostream>
#include<cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;


public:
	Fraction(int num = 0, int den = 1)
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}


	Fraction(const Fraction &fraction)//자기하고 똑같은 애가 들어오는 게 복사 생성자.
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "copy constructor called" << endl;
	}


	friend std::ostream &operator<<(std::ostream & out, const Fraction &f)
	{
		out << f.m_numerator << "/ " << f.m_denominator << endl;
		return out;


	}



};


Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}
int main()
{
	Fraction result = doSomething();
	//copy constructor 생성. release모드에서는 copy construtor 생성x
	cout << &result << endl;//different from &temp => release모드에서는 주소가 같아서 복사 필요x
	cout << result << endl;

	return 0;
}