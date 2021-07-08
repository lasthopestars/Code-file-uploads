#include<iostream>

using namespace std;



int main()
{
	int *ptr = new int{ 7 };
	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;


	cout << "After delete" << endl;
	cout << ptr << endl;//the address is saved in the variable
	cout << *ptr << endl;//dereferencing

	return 0;
}