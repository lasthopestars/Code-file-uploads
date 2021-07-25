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


	Fraction(const Fraction &fraction)//�ڱ��ϰ� �Ȱ��� �ְ� ������ �� ���� ������.
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
	//copy constructor ����. release��忡���� copy construtor ����x
	cout << &result << endl;//different from &temp => release��忡���� �ּҰ� ���Ƽ� ���� �ʿ�x
	cout << result << endl;

	return 0;
}