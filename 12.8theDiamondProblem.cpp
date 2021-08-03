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
	//1) 주소가 다르게 나온다. 다른 애들이다.

	//2)virtual public PowerDevice로 바꿔줬고 , PoweredDevice(power)로 copier를 바꿔줌.
	//=> 이러면 주소가 같게 나옴.
}
