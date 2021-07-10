
#include<iostream>
#include<cmath>

using namespace std;


typedef int* pint;



//void foo(int *&ptr)
void foo(pint &ptr)//how to easily use pointer by reference
{
	cout << ptr <<" "<< &ptr<< endl;
}





int main()
{
	int x = 5;
	//int *ptr = &x;
	pint ptr = &x;//pointer

	cout << ptr << " " << &ptr << endl;
	foo(ptr);

	return 0;
}