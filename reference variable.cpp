#include<iostream>

using namespace std;




int main()
{
	int value = 5;
	int *ptr=nullptr;
    ptr = &value;

	int &ref = value;// it acts as if ref is the same variable as value;

	cout << ref << endl;

	ref = 10;
	cout << value << " " << ref << endl;


	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	return 0;
}