#include<iostream>

using namespace std;




int main()
{
	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;

	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;


	return 0;
}