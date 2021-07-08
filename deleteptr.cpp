#include<iostream>

using namespace std;



int main()
{
	int *ptr = new int{ 7 };
	cout << ptr << endl;
	cout << *ptr << endl;

	//delete ptr;//giving back memory to OS

	return 0;
}