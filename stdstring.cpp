#include<iostream>
#include<string.h>
#include<limits> 

int main()
{

	using namespace std;
	
		cout << "Your age? : " << endl;
	int age;
	
	cin>>age;
	
	
	//std::cin.ignore(32767,'\n');//최대 32767 개의 글자를 무시하라. 2바이트 int 값 최대값. 
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    string name;
	cout << "Your name? : " << endl;
	std::getline(std::cin, name);



		
		cout<<name<<" "<<age;



	


	


	return 0;
}
