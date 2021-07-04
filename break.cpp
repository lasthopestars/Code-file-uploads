#include<iostream>

using namespace std;




int main()
{

	int count(0);

	//bool escape_flag = false;

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}
	return 0;
}