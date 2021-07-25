#include<iostream>
#include<cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;


public:

	Fraction(char) = delete;
	//이렇게 막아버림.

	explicit Fraction(int num = 0, int den = 1)//explicit쓰면 더 엄격하게 됨. converting constructor 기능 못함.
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


void doSomething(Fraction frac)
{
	cout << frac << endl;
}
int main()
{
	//Fraction frac2('c');//에러가 뜸
	Fraction frac(7);//7앞으로 들어가고 분모는 원래 1로 지정되었음.

	doSomething(frac);

	return 0;
}