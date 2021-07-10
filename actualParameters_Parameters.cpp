#include<iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}//as this function ends x and y are destroyed here.Local variables.

int main()
{
	int x = 1, y = 2;

	cout<<foo(6, 7)<<endl;//6,7 : parameters(actual parameters)
	cout<<foo(x, y + 1)<<endl;

	return 0;
}