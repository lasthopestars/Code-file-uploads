#include<cassert>
#include<array>
#include<iostream>
using namespace std;


int main()
{
    const int x = 5;

	assert(x == 5);
	static_assert(x == 5, "x should be five");

	return 0;
}
