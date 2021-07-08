#include<iostream>

using namespace std;




int main()
{

	int value1 = 5;
	const int *ptr = &value1;// this means that ' I will not change the value that the pointer is pointing at'
	//doesn't mean 'I won't change the address of the ptr'
	
	int value2 = 6;
	ptr = &value2;

	return 0;
}