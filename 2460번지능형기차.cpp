#include<iostream>
using namespace std;

int main(void)
{

	int ride = 0, leave = 0;
	int big = -1000;
	int num=0;

	for (int i = 1; i < 11; i++)
	{

		

		cin >> leave;
		cin >> ride;

		num += ride - leave;

		if (num > big)big = num;
	


		
	}

	
	cout << big << endl;

}