#include<iostream>

using namespace std;


int add(int x)
{
	int i,sum=0;
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
	return sum;
}


int main(void)
{
	int i, n;

	cin>>n;
	
	int num[n];
	int answer[n];
	
	for(i=1;i<=n;i++)
	{
			cin>>num[i];
			cin>>answer[i];	
	}
	
	
		for(i=1;i<=n;i++)
	{
			if(add(num[i])==answer[i])
				cout<<"YES"<<endl;
			else
			   cout<<"NO"<<endl;	
			
	}
		
	
	
}
