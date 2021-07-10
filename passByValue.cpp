#include<iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;
	cout << "In main " << x << " " << &x << endl;

	doSomething(x);//x is a parameter
	doSomething(x + 1);
}