#include<iostream>

using namespace std;




int main()
{

	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;// it skips 5.
	} while (++count < 10);
	//if the count++ is in the loop, it stops after printing 4, because of the continue statement.
	//but in the while statement, it increases.


	return 0;
}