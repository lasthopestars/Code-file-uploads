#include<iostream>
#include<cassert>
using namespace std;

class Boat
{
private:
	int boat[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:
	int & operator[] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);
		return boat[index];
	}

	const int & operator[] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return boat[index];
	}
};


int main()
{
	
	Boat *boat = new Boat;


	//list[3]//list��ü�� array�� �����Ϸ��� �ϴϱ� error ����. �ǵ��� �ٸ���.

	//const IntList my_list;
	//cout<<my_list[3]<<endl;

	

	(*boat)[5] = 10;

	
	cout << (*boat)[3] << endl;
	cout << (*boat)[5] << endl;



	return 0;

}