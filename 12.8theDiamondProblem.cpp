#include<iostream>
using namespace std;

class PoweredDevice
{
public:
	int m_i;

	PoweredDevice(int power)
	{
		cout << "PoweredDevie" << power << '\n';
	}
};

class Scanner :virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

class Printer :virtual public PoweredDevice
{
public:
	Printer(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Printer: " << scanner << '\n';
	}
};

class Copier :public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		:Scanner(scanner, power), Printer(printer, power),
		PoweredDevice(power)
	{
		
	}
};

int main()
{

	Copier cop(1, 2, 3);

	cout << &cop.Scanner::PoweredDevice::m_i << endl;
	cout << &cop.Printer::PoweredDevice::m_i << endl;
	//1) �ּҰ� �ٸ��� ���´�. �ٸ� �ֵ��̴�.

	//2)virtual public PowerDevice�� �ٲ���� , PoweredDevice(power)�� copier�� �ٲ���.
	//=> �̷��� �ּҰ� ���� ����.
}
