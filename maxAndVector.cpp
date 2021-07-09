#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	/*int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	*/
	std::vector<int>fibonacci = { 0,1,1,2,3,5,8,13,21,55,89 };

	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : fibonacci)
		max_number = std::max(max_number, n);/*compares max_number (the lowest number) and n (the element
	in the fibonacci, and returns the 'max' number.*/

	cout << max_number << endl;
	/*in the case of dynamic allocation, you can't use for-each.
	*/
}