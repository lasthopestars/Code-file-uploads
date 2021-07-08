#include<iostream>

using namespace std;




int main()
{

	int value = 5;
	int *const ptr = &value; /*can't change the address of the pointer*/

	*ptr = 10;
	cout << *ptr << endl;

	//ptr=&value2;-> unacceptable
	return 0;
}