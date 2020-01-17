#include<bits/stdc++.h>
using namespace std;

vector<long long int> fact(long long int n){
	vector<long long int> a;
	for(long long int i=1;i<=sqrt(n);i++){
		
		if(n%i==0){
			if(n/i==i){
				a.push_back(i);
			}
			else{
				a.push_back(i);
				a.push_back(n/i);
			}
		}
	}
	return a;
}

int main(){
	long long int t;
	cin>>t;
	vector<long long int> b=fact(t);
	sort(b.begin(),b.end());
	for(long long int i=0;i<b.size();i++){
	
		
			cout<<b[i]-1<<" ";
		

	}
	return 0;
}