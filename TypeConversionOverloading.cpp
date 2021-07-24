#include<iostream>
using namespace std;

class Murfy
{
private:
	int m_love;

public:

	Murfy(int love = 0)
	{

		m_love = love;
	}

	int getLove() { return m_love; }
	void setLove(int love) { m_love = love; }

	operator int()
	{
		cout << "I'm here" << endl;
		return m_love;
	}

};

class Breakup
{
private:
	int m_breakup = 0;

public:
	Breakup(const int& input) : m_breakup(input) {}

	operator Murfy()
	{
		return Murfy(m_breakup * 300);
	}

};

void printInt(const int &value)
{
	cout << value << endl;
}

int main()
{

	Breakup breakup(2);
	Murfy love = breakup;
	

	printInt(love);

	return 0;
}