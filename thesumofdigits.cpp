#include<iostream>
using namespace std;

int digit_sum(int x){
	int tmp,sum;
	
	while(x>0)
	{
		tmp=x%10;
		sum+=tmp;
		x=x/10;
	}
	return sum;
}



int main(void)
{

	int i,N,sum, num, max=-21470000, res;
	cin>>N;
	
	for(i=0;i<N;i++){
		cin>>num;
	sum=digit_sum(num);
	
	if(sum>max)
	{
		max=sum;
		res=num;
	}
	else if(sum==max)
	{
		if(num>res)
		res=num;
	}
}
	
	cout<<res;
	return 0;
}


