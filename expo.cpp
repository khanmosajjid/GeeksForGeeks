#include <bits/stdc++.h>
using namespace std;
# define ll long long


ll power(ll a,ll b,ll m){
    ll res=1;
    
    while(b>0){
        
        if(b&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	 while(t--){
	    long long int a=0,b=0;
	     cin>>a>>b;
	    
	     long long int x=pow(10,9)+7;
	      long long int c=power(a,b,x);
	     cout<<c<<endl;
	 }
	return 0;
}