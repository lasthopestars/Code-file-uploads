#include<iostream>
using namespace std;
int cnt[500001]={0};

int main(void)
{
	int i,j,N;
	cin>>N;
	
	//i가 2까지라고 하면
	//j=2;j<=8;j=2+2
	//cnt[2]++
	//j=4;j<=8;j=4+2
	 
	
	for(i=1;i<=N;i++)
	{
		for(j=i;j<=N;j=j+i){
		cnt[j]++;	
		}		
		
	}
	
	for(i=1;i<=N;i++)
	{
		cout<<cnt[i]<<" ";
	}
	
return 0;


}

