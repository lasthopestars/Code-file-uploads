#include<iostream>

using namespace std;


void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;//prints out "Hello"
		if (ch == 'r')
			return;// exits the function breakorReturn();
	}

	cout << "Hello" << endl;
}

int main()
{
	breakOrReturn();
	
	return 0;
}