#include<iostream>
using namespace std;

int main()
{
	int N,num,max=-1000001,min=1000001;
	
	cout << "������ ������ �Է��϶�";
	cin >> N;
	

	for (int i = 0; i < N; i++)
	{
		
		cin >> num;
		if (num > max)max = num;
		if (min > num)min = num;

	}

	cout << min << " " << max << endl;
}