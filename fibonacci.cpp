#include <iostream>
#include <vector>

using namespace std;


int Fi(int num)
{

	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else
		return Fi(num - 1) + Fi(num - 2);

}

int main() {

	int num = 13;

	cout << Fi(num) << endl;

	return 0;

}