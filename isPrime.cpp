#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){

	for(long long int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	long long int n,ans;

	while(cin>>n){
		if(n==0||n==1){
			cout<<"0"
		}
	for(long long int i=1;i<=n;i++){
		if(n%i==0){
		if(isPrime(n/i)){
			ans=i;
			break;
		}
		int a=n/i;
		if(isPrime(n/a)){
			ans=n/i;
		}
	}
	else{

	}

	}
		cout<<ans<<endl;
 }

	return 0;
}