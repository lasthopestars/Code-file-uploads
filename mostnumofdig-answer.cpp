#include<iostream>
using namespace std;
int ch[10];

int main(){
	int i,digit,max=-2147000, res;
	char a[101];
	gets(a);
	for(i=0;a[i]!='\0';i++){
		digit=a[i]-48;//char '1'은 정수값 49 
		ch[digit]++;
	}
	for(i=0;i<=9;i++){
		if(ch[i]>=max){
			max=ch[i];
			res=i;
		}
	}
	cout<<res;
	return 0;
}
