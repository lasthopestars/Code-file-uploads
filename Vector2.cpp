#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int *my_arr = new int[5];

	vector<int> arr = { 1,2,3,4,5 };


	arr.resize(10);//resizing is an option.

	for (auto &itr : arr)
		cout << itr << " ";
	cout << endl;



	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	//vector disappears right after it exits the block, so there's no need for delete[]
	return 0;
}