#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};


int main()
{

	Person person;
	person.age = 5;
	person.weight = 30;

	Person &ref = person;
	ref.age = 5;
	ref.weight = 45;

	Person *ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	Person &ef2 = *ptr;//dereferencing
	ef2.age = 45;


	cout << &person << endl;
	cout << &ef2 << endl;



	return 0;
}