#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	std::array<int, 5>my_arr = { 1,21,3,40,5 };
	//my_arr = { 0,1,2,3,4 };//can't do 0,1,2,3,4,5 cause it exceeds the number of
	//variables that you initialized in the first place.
	//my_arr = { 0,1,2 };//it's okay if the num of elements is smaller.



	std::sort(my_arr.begin(), my_arr.end());


	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;



	std::sort(my_arr.rbegin(), my_arr.rend());//reverse sorting.


	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;



//	cout << my_arr[10] << endl;
	//cout << my_arr.at(10) << endl;//at checks firsthand and if there's a problem it executes
	//exception handling.
	//cout << my_arr.size() << endl;

	//printLength(my_arr);


	return 0;
}