#include<iostream>


using namespace std;



void doSomething()
{	//it's not a global variable, the memory that 'a' received from the OS is static. static initializes only once.
	//the value doesn't initialize everytime. a=1 is not repeated. 
    static int a = 1;
	//
	++a;

	cout << a << endl;
};

int main()
{
	

	doSomething();
	doSomething();
	doSomething();
	doSomething();

	return 0;
	
}