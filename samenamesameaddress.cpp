#include<iostream>

using namespace std;


const char* getName()
{
	return "Jackjack";
}

int main()
{
	//char name[] = "Jack jack";
	//char *name="Jack Jack" -> This is impossible because pointers can only point at the address
	//of the memory

	const char *name = getName();
	//it's only possible if you put in const in front.

	const char *name2 = getName();
	
		cout << (uintptr_t)name << endl;
		cout << (uintptr_t)name2 << endl;
		/*it prints the same address. The compiler is saying 'you two are the same, so use this address together'*/
}