#include<iostream>
using namespace std;

class Fraction
{
public:
	int m_numerator;//����
	int m_denominator;//�и�

public:

	
	
	Fraction(const int& num_in=1, const int& den_in=1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << "/  " << m_denominator << endl;
	}

};

int main()
{
	Fraction one_thirds = Fraction{ 1,3 };//3���� 1�� ����� ����.
	one_thirds.print();


	
	return 0;
}
