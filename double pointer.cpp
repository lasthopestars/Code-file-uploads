#include<iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;//a pointer to a pointer.

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr <<" "<< *ptr<<" " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << **ptrptr << endl;



	return 0;
}