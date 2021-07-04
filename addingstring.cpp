#include<iostream>
#include<limits>


using namespace std;

int main()
{
	string a("Hello,");
	
	string b("World. ");
	
	string hw=a+b;
	hw+=" Today is sunny.";
	
	
	cout<<hw<<endl;
	
	cout<<a.length()<<endl;
	return 0;
}

