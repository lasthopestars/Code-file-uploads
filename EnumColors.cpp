#include<iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};


void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black"<<endl;
		break;
	case 1:
		cout << "White" << endl;
		break;



	}
}

int main()
{
	printColorName(Colors::WHITE);
	
	
	return 0;
}