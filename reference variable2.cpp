#include<iostream>

using namespace std;




int main()
{
	int x = 5;
	int &ref = x;
	/*int &ref=104=> this is impossible because a reference variable cannot take a number*/
	const int y = 8;
	const int &ref = y;


	return 0;
}