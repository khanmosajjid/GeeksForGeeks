#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	int a[10000];

	while(k--){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		next_permutation(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}