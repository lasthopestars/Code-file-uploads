#include<iostream>
using namespace std;

class Accumulator
{

private:
	int m_counter = 0;

public:
	int operator ()(int i) { return (m_counter += i); }
	int operator ()(double i) { return (m_counter *= i); }
};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;//m_counter+10�� ���� ����. ���� �׾ư��� Accumulator.
	cout << acc(20) << endl;//20�� 10�� �ٽ� ���ϴ� ����̴�.
	cout << acc(10.0) << endl;

}