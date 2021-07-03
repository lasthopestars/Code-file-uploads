#include<iostream>
#include<typeinfo>
#include<string.h>
//template


enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE ,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	
};



int computeDamage(int weapon_id)
{
	if (weapon_id == 0)//sword
	{
		return 1;
	}

	if (weapon_id == 1)
	{
		return 2;
	}
}

int main()
{
	using namespace std;

	int color_id = COLOR_RED;

	cout << color_id << endl;

	Color my_color = static_cast<Color>(3);

	int in_number;
	cin >> in_number;

	

	if (in_number == static_cast<Color>(0))
		my_color = static_cast<Color>(0);





	return 0;
}