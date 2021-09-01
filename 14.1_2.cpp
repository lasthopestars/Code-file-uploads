#include<iostream>
#include<fstream>
#include<string>

using namespace std;



int main()
{
	

	try
	{
		throw "My Error Message";
	}
	catch (double x)
	{
		cout << "Catch double" << endl;
	}
	catch (const char * error_message)
	{
		cout << "Char * " << error_message << endl;
	}


	return 0;

}