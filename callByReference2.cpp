#include<iostream>

using namespace std;


//reference used when in need of multiple returns.
//the ones that are called by reference are usually placed behind.
//const is written when the value isn't going to be changed.
void getSinCos(const double &degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592;

	double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);

}

int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}
