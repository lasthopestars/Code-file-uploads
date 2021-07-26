
#include "Monster.h"


using namespace std;

int main()
{
	Monster mon1("Samson",Position2D(0, 0));
	//mon1.m_location;
	Monster mon2("Devilia", Position2D(3, 0));
	//mon2.m_location;
	
	{
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}
}
