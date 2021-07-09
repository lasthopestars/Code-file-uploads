#include<iostream>

using namespace std;


int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	int *ptr_i = &i;


	


	return 0;
}