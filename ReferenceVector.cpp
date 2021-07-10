
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;




void printElements(vector<int>&arr)
{

	for (auto &element : arr)
		cout << element << " ";
	cout << endl;

	cout << arr.at(0) << endl;
}





int main()
{
	/*int arr[]{ 1,2,3,4 };*/

	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

	return 0;
}