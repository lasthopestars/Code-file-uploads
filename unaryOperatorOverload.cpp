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
		//!Cents(...) //Cents가 0이면 Not이니까 true를 리턴. 프로그래밍하려는 목적에 따라 다름.
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
	//땡전한푼 없다는 것이 사실이 아니다 =0
	//땡전한푼 없다는 것이 사실이다.

	int a = 3;

	

}