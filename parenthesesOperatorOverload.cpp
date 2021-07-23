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
	cout << acc(10) << endl;//m_counter+10한 값을 리턴. 값을 쌓아가는 Accumulator.
	cout << acc(20) << endl;//20을 10에 다시 더하는 방법이다.
	cout << acc(10.0) << endl;

}