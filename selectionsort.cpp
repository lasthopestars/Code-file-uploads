#include<iostream>

using namespace std;


void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	//const int num_students = 5;

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };


	printArray(array, length);
	//swap
	int temp = array[0];
	array[0] = array[1];
	array[1] = temp;

	printArray(array, length);


	for (int startIndex = 0; startIndex < length - 1; ++startIndex)// when only one element is left you don't need the loop so -1
	{

		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		//swap two values in the array
		//std::swap(array[smallestIndex], array[startIndex]);

		{

			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;

		}

		printArray(array, length);
	}
	return 0;

}



