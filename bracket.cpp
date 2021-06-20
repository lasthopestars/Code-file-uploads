#include<iostream>
using namespace std; 
int main(void)
{
	char a[100];
	int i, cnt=0;
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='(')cnt++;
		else if(a[i]==')'){
			cnt--; 
			if(cnt<0)break;
			}
			
	}
	
	if(cnt==0)cout<<"YES";
	else cout<<"NO";
	
}
