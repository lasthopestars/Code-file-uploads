#include<iostream>
using namespace std;


class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{

	Second sec;
	//first class 안에서 second class의 variable이 멤버로 들어가 있죠.

	/*한 클래스가 다른 클래스를 자신의 멤버 variable로 사용할 경우에는 
	멤버 variable의 constructor 가 먼저 호출이 된다.*/

	/*Second가 First의 멤버로 들어와 있기 때문에 먼저 초기화해줘야 거기에 대해서
	first가 작업을 할 수 있기 때문이죠. 
	*/

public: 
	First()
	{
		cout << "class First constructor()" << endl;
	}
};


int main()
{
	First fir;

	
	return 0;
}
