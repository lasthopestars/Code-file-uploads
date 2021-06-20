#include<iostream>
using namespace std;

int main(void)
{
	int i;
	char a[20]={0};
	char b[20]={0};
	gets(a);
	int p=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			if(a[i]>=65&&a[i]<=96)
			{
					b[p++]=a[i]+32;
			}
			else b[p++]=a[i];
		
		}
	}
	

			cout<<b;
		
	


}
