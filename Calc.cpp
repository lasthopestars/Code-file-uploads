#include "Calc.h"

using namespace std;

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc::Calc(int init_value) { }

Calc & Calc::sub(int value)
{
	m_value -= value;
	return *this;


}

 Calc & Calc::mul(int value) 
{
	 m_value *= value;
	 return *this;

}

void Calc::print()
 {
	 cout << m_value << endl;
 }
