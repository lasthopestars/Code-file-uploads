#include<iostream>
using namespace std;


int main(void)
{
	int N,i,j,p=0,q=0;
	int a[30]={0};
	int b[30]={0};
	cin>>N;
	
	for(i=1;i<=N;i++)
	{
		
			a[p++]=i;
						
		
	}
	
	for(i=0;a[i]!='\0';i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				b[i]++;
				
			}
		}
		
	}
	
	for(i=0;b[i]!='\0';i++)
	{
		cout<<b[i]<<" ";
	}




}

