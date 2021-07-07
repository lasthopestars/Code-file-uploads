#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;



	cout << endl;


	/*int array[][num_columns]
	{
		{1,2,3,4,5}, //row0
		{6,7,8,9,10}, //row1
		{11,12,13,14,15}//row2
	};*/

	int array[num_rows][num_columns] = { 0 };
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			//cout << "[" << row << ']' << '[' << col << ']' << '\t';
			//cout << array[row][col] << '\t';

			cout << array[row][col] << '\t';
		cout << endl;
	}



	return 0;
	
}