#include<iostream>
using namespace std;

int main(){
	int n, sum=0, c=1, d=9, res=0; //res �� ��, c �� �ڸ� ��
	cin>>n;
	
	//d�� �ڸ����� ���� 
	while(sum+d<n){//�ڸ��� (ex.10 * 9) 
		res=res+(c*d); 
		sum=sum+d;//sum=9
		c++;//���� �ڸ� ������ �ڸ���. 
		d=d*10;//90����. 
	}
	res=res+((n-sum)*c);
	cout<<res;
	return 0; 
}

