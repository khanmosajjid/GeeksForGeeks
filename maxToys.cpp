#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr;
	    
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(),arr.end());
	    
	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        if(k-arr[i]>=0){
	            count++;
	            k=k-arr[i];
	        }
	        if(k-arr[i]<0){
	            break;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}