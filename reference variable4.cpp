#include<iostream>

using namespace std;


void doSomething(int &a)
{
	cout << &a << endl;
	a = 10;
	cout << "In doSomething:"<<" " << a << endl;
}

int main()
{
	int n = 5;
	cout << n << endl;

	cout << &n << endl;

	doSomething(n);
	cout << n << endl;

	return 0;
}