#include<iostream>
using namespace std;





int main(void)
{
   int i,j,num,fnum,jarit=1,p=0,big=-21000,bignum,answer;
  
	cin>>num;
	
	fnum=num;
	
	
	while(fnum>0)
	{
		fnum=fnum/10;
		jarit++;
	}
	
	int temp[jarit]={0};
	 int arr[jarit]={0};
	
	while(num>0)
	{
		for(i=0;i<jarit;i++)
		{
			temp[i]=num%10;
			num=num/10;
		}
	}
	
	
	for(i=0;i<jarit;i++)
	{
		arr[temp[i]]++;
	}
	
	
	
	for(i=0; arr[i]!='\0';i++)
	{
		if(arr[temp[i]]>big)
		{
				big=arr[i];
				answer=temp[i];
	         
			
		 }
	
	
	
	}
	
   cout<<answer;
 

}
