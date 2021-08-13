#include<iostream>
using namespace std;

#define MAX_SIZE 5

void insertion_sort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];

		for (int j = i - 1; j >= 0&& arr[j]>key;j--)
		{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}

}

int main()
{
	const int num = MAX_SIZE;
	int arr[num] = { 5,4,7,3,6 };

	
	insertion_sort(arr, num);

	for (int i = 0; i < num; i++) {
		cout << arr[i];
	}


}

