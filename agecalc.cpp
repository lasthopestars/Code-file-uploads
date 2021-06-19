
#include<iostream>
#include<string>

using namespace std;
int main(void)
{
	/*freopen("input.txt", "rt", stdin);*/
	char a[14],sex;
	int i,age, year;
	
	for(i=0;i<14;i++)
	{
		cin>>a[i];
	}
	
	
	if(a[7]=='1'||a[7]=='2') year=1900+((a[0]-48)*10+ a[1]-48);
	else
	year=2000+((a[0]-48)*10+ a[1]-48);
	
	age=2019-year+1;
	cout<<age;
	
	if(a[7]=='1'||a[7]=='3')
	sex='M';
	else
	sex='W';
	
   cout<<sex;
	
}
