#include<iostream>
using namespace std;



int main(void)
{
	int i,n,j,flag,cnt=0;
	cin>>n;
	
	for(i=2;i<=n;i++){
		flag=1;
		for(j=2;j*j<=i;j++){
				if(i%j==0){
		 		flag=0;
		 		break;	
			}
		}
	
	  if(flag==1) cnt++;	
	}
	cout<<cnt;
	return 0;
	
	
	
	
	
}



