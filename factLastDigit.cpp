#include<bits/stdc++.h>
using namespace std;

int fact(int x){
	if(x==0||x==1){
		return 1;
	}
	else return x*fact(x-1);
}

int lastDigit(int x){


	while(x/10!=0){
		x=x%10;

	}
	return x;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=fact(n);
		cout<<lastDigit(x)<<endl;

	}
	return 0;
}