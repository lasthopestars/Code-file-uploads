#include "Odin.h"
using namespace std;

int main()
{
	Odin odin("OdinTheGreat", position2d(0, 0));

	cout << odin << endl;

	{
		odin.moveTo(position2d(1, 1));
		cout << odin << endl;
	}

	return 0;
}