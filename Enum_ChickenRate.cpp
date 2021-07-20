#include<iostream>
using namespace std;


class ChickenRate
{
public:
	enum class Rate
	{
		One=1,Two,Three,Four,Five
	};

	Rate m_type;

public:
	ChickenRate(Rate type)
		:m_type(type){}

	ChickenRate::Rate getRate() { return m_type; }
};

int main()
{
	ChickenRate puradak(ChickenRate::Rate::Five);
	cout << static_cast<int>(puradak.getRate()) << endl;
}