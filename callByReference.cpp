#include<iostream>

using namespace std;

void addOne(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}
//call by value defines a new variable and copies the value in there,
//whilst call by reference sends the address itself, so the address is the same
//and there is no process of copying the value in.

int main()
{
	
	int x = 5;

	cout << x << " " << &x << endl;
	addOne(x);//6-> the x here and the &y has the same address 
	cout << x << " " << &x << endl;


	return 0;
}
