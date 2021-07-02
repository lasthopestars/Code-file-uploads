#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	
	const unsigned char opt0 = 1 << 0;//2의 0자리수만큼 미는 것.
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	unsigned char items = 0;
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;

	unsigned char item = 0;
	cout << "No item" << bitset<8>(item) << endl;


	item |= opt1;
	cout << "Item1 obtained " << bitset<8>(item) << endl;

	item |= opt2;
	cout << "Item2 obtained " << bitset<8>(item) << endl;

	item &= ~opt2;
	cout << "Item2 lost" << bitset<8>(item) << endl;

	
	if (item & opt1) {
		//true
		cout << "Has item1" << endl;
	}


	if (item & opt2) {
		//true
		cout << "Has item2" << endl;
	}

	//obtain item 1,2
	item |= (opt2 | opt3);
	cout << "Item2,3 obtained " << bitset<8>(item) << endl;

	if ((item &opt2) && (item&!opt1))//if they don't have opt1
	{
		item ^= opt2;
		item ^= opt1;
			//changing the state =using xor
	}

	cout << bitset<8>(item) << endl;
	return 0;

	
}