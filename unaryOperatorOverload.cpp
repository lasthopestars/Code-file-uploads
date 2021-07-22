#include<iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Cents operator-() const
	{
		return Cents(-m_cents);
	}

	bool operator!() const
	{
		//!Cents(...) //Cents�� 0�̸� Not�̴ϱ� true�� ����. ���α׷����Ϸ��� ������ ���� �ٸ�.
		return (m_cents == 0) ? true : false;
	}


	friend std::ostream& operator<<(std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);
	Cents cents3(8);
	cents1.operator-();
	cout << !cents1 << " " << !cents2 << endl;
	cout << -cents3 << endl;
	//������Ǭ ���ٴ� ���� ����� �ƴϴ� =0
	//������Ǭ ���ٴ� ���� ����̴�.

	int a = 3;

	

}