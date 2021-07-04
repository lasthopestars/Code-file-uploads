#include<iostream>
#include<cstdlib>


using namespace std;


struct Employee//14bytes+2bytes(padding)
{
	short id;//2bytes
	int age;//4bytes
	double wage;//8bytes

};




int main()
{
	Employee emp1;
	cout << sizeof(Employee) << endl;


	return 0;
}