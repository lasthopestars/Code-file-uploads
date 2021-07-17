#include <iostream>
#include <vector>

using namespace std;




int main() {

	string hello = "my name is Jack Sparrow";
	cout << "Input from 0 to " << hello.size() - 1 << endl;
	

	while (true)
	{
		int x;
		cin >> x;

		if (x >= 0 && x <= hello.size() - 1)
		{
			cout << hello[x] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;

	}

}