#include<iostream>
using namespace std;


class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}



class A
{
public:
	int m_value;



	A(const int& input)
		:m_value(input)
	{
		cout << "Constructor" << endl;

	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void printDouble()
	{
		cout << m_value *2 << endl;
	}

};

int main()
{
	
	cout << add(Cents(6), Cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;


	return 0;
}