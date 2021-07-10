#include<iostream>

using namespace std;


void foo(const int &x)
{
	cout << x << endl;
}

int main()
{
	//foo(6);-> a literal doesn't have an address, this code is wrong, unless you put const in the function foo.
	foo(6);


	return 0;
}
