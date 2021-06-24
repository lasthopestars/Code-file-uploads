#include<iostream>
using namespace std;

int main(){
	int n, sum=0, c=1, d=9, res=0; //res 는 답, c 는 자리 수
	cin>>n;
	
	//d는 자릿수의 갯수 
	while(sum+d<n){//자릿수 (ex.10 * 9) 
		res=res+(c*d); 
		sum=sum+d;//sum=9
		c++;//다음 자리 숫자의 자릿수. 
		d=d*10;//90개다. 
	}
	res=res+((n-sum)*c);
	cout<<res;
	return 0; 
}

