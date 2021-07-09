#include<iostream>

using namespace std;


struct Something
{
	int v1;
	float v2;
};


struct Other
{
	Something st;

};

int main()
{
	int value = 5;
	int *const ptr = &value;
	int &ref = value;

	*ptr = 10;//1)
	ref = 10;//2)  1),2) these are same

	return 0;
}