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
	//first class �ȿ��� second class�� variable�� ����� �� ����.

	/*�� Ŭ������ �ٸ� Ŭ������ �ڽ��� ��� variable�� ����� ��쿡�� 
	��� variable�� constructor �� ���� ȣ���� �ȴ�.*/

	/*Second�� First�� ����� ���� �ֱ� ������ ���� �ʱ�ȭ����� �ű⿡ ���ؼ�
	first�� �۾��� �� �� �ֱ� ��������. 
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
