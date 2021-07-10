#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//std::array<int,5> array;
	std::vector<int> array;

	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;


	std::vector<int>array3 = { 1,2,3};
	cout << array3.size() << endl;

	std::vector<int>array4{ 1,2,3,4 };
	cout << array4.size() << endl;

	return 0;
}